%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    void warning(char *s, char *t);
    void yyerror(char* s);
    int yylex();
    int start_screen(char *name);
    void end_file();
    int screen_done = 1; /* 1 if done, 0 otherwise */
    static int done_start_init;
    static int done_end_init;
    extern FILE *yyin, *yyout;
    char *menu_runtime[];
    char *screen_init[];
    char *menu_init[];
    static int current_line;
    int check_name(char* name);
    int end_screen(char *name);
    static char current_screen[100]; /* reasonable? */
    void cfree(char *p);
    void add_title(char* line);
    #define SCREEN_SIZE 80
    char *item_str; /* extra argument for*/
    void add_line(int action, int attrib);
    char *act_str;  /* extra argument for an action */
    char *cmd_str;  /* extra argument for command */
%}

%union {
        char *string;
        int     cmd;          /* command value */
}

%token <string> QSTRING ID COMMENT
%token <cmd> SCREEN TITLE ITEM COMMAND ACTION EXECUTE EMPTY
%token <cmd> MENU QUIT IGNORE ATTRIBUTE VISIBLE INVISIBLE END
%type <cmd> action line attribute command
%type <string> id qstring
%start screens
%%
screens:  screen
        | screens screen
        ;
screen:   screen_name screen_contents screen_terminator
        | screen_name screen_terminator
        ;
screen_name: SCREEN id { start_screen($2); }
           | SCREEN    { start_screen(strdup("default"));}
           ;
screen_terminator: END id { end_screen($2); }
                 | END { end_screen(strdup("default")); }
;
screen_contents: titles lines
               ;
titles: /* empty */
        | titles title
        ;
title: TITLE qstring { add_title($2); }
     ;
lines: line
     | lines line
     ;
line: ITEM qstring command ACTION action attribute    { item_str = $2;
                                                                add_line($5, $6);
                                                                $$ = ITEM;
                                                      }
                                                ;
command: /* empty */                    { cmd_str = strdup(""); }
                | COMMAND id                     { cmd_str = $2; }
                                                ;
action: EXECUTE qstring                 { act_str = $2;
                                                $$ = EXECUTE;
                                                }
                | MENU id               { /* make "menu_" $2 */
                                        act_str = malloc(strlen($2) + 6);
                                        strcpy(act_str,"menu_");
                                        strcat(act_str, $2);
                                        free($2);
                                        $$ = MENU;
                                         }
                | QUIT                   { $$ = QUIT; }
                | IGNORE                 { $$ = IGNORE; }
                                                ;
attribute: /* empty */                  { $$ = VISIBLE; }
         | ATTRIBUTE VISIBLE            { $$ = VISIBLE; }
         | ATTRIBUTE INVISIBLE          { $$ = INVISIBLE; }
                                                ;
id: ID                                  { $$ = $1; }
         | QSTRING                      { warning("String literal inappropriate",
                                          (char *)0);
                                        $$ = $1; /* but use it anyway */
                                         } 
                                                ;
qstring:                                QSTRING { $$ = $1; }
       | ID                              { warning("Non-string literal inappropriate",
                                                        (char *)0);
                                                $$ = $1;     /* but use it anyway */
                                          } 
                                          ;
%%
char *progname = "mgl";
int lineno = 1;
#define DEFAULT_OUTFILE "screen.out"
char *usage = "%s: usage [infile] [outfile]\n";
struct item
{
    char *desc;
    char *cmd;
    int action;
    char *act_str;
    int attribute;
    struct item *next;
} *item_list, *last_item;
int main(int argc, char** argv)
{

        char *outfile;
        char *infile;
        //extern FILE *yyin, *yyout;
        progname = argv[0];
        if(argc > 3) {
                fprintf(stderr,usage, progname);
                exit(1); 
        }
        if(argc > 1) {
                infile = argv[1];
                /* open for read */
                yyin = fopen(infile,"r");
                if(yyin == NULL) /* open failed */
                {
                        fprintf(stderr,"%s: cannot open %s\n",progname, infile);
                        exit(1);
                } 
        }
        if(argc > 2) {
                outfile = argv[2];
        }
        else {
                outfile = DEFAULT_OUTFILE;
             }

        yyout = fopen(outfile,"w");
        if(yyout == NULL) /* open failed */
        {
                fprintf(stderr,"%s: cannot open %s\n",progname, outfile);
                exit(1);
        }
        /* normal interaction on yyin and
         yyout from now on */
        yyparse();
        end_file(); /* write out any final information */
        /* now check EOF condition */
        if(!screen_done) /* in the middle of a screen */
        {
            warning("Premature EOF",(char *)0);
            //unlink(outfile); /* remove bad file */
            exit(1);
        }
        exit(0); /* no error */
        return 0;
}
void yyerror(char* s)
{
    fprintf(stderr, "%s\n", s);
}
void warning(char *s, char *t) /* print warning message */
{
      fprintf(stderr, "%s: %s", progname, s);
      if (t)
            fprintf(stderr, " %s", t);
      fprintf(stderr, " line %d\n", lineno);
}
////////////////////////////////////////////////////////////////
void dump_data(char** array)
{
    while (*array)
        fprintf(yyout, "%s\n", *array++);
}
void end_file()
{
    dump_data(menu_runtime);
}
int start_screen(char *name) /* name of screen to create */
{
    long time(), tm = time((long *)0);
    char *ctime();
    if (!done_start_init)
    {
        fprintf(yyout,"/*\n * Generated by MGL: %s */\n\n",ctime(&tm));
        dump_data(screen_init);
        done_start_init = 1;
    }
    if (check_name(name) == 0)
    warning("Reuse of name", name);
    fprintf(yyout, "/* screen %s */\n", name);
    fprintf(yyout, "menu_%s()\n{\n", name);
    fprintf(yyout,"\textern struct item menu_%s_items[];\n\n",name);
    fprintf(yyout, "\tif(!init) menu_init();\n\n");
    fprintf(yyout, "\tclear();\n\trefresh();\n");
    if (strlen(name) > sizeof current_screen)
    warning("Screen name is larger than buffer", (char *)0);
    strncpy(current_screen, name, sizeof(current_screen) - 1);
    screen_done = 0;
    current_line = 0;
    return 0;
}
/*
 * process_items:
 * Walk the list of menu items and write them to an
 * external initialized array. Also defines the symbolic
 * constant used for the run-time support module (which
 * is below this table).
 */
void process_items()
{
    int cnt = 0;
    struct item *ptr;
    if (item_list == 0)
        return; /* nothing to do */
fprintf(yyout, "struct item menu_%s_items[]={\n", current_screen);
ptr = item_list;
/* climb through the list */
while (ptr)
{
    struct item *optr;
    if (ptr->action == MENU)
        fprintf(yyout,
                "{\"%s\",\"%s\",%d,\"\",%s,%d},\n",
                ptr->desc, ptr->cmd, ptr->action,
                ptr->act_str, ptr->attribute);
    else
        fprintf(yyout,
                "{\"%s\",\"%s\",%d,\"%s\",0,%d},\n",
                ptr->desc, ptr->cmd, ptr->action,
                ptr->act_str ? ptr->act_str : "",
                ptr->attribute);
    cfree(ptr->desc);
    cfree(ptr->cmd);
    cfree(ptr->act_str);
    optr = ptr;
    ptr = ptr->next;
    free(optr);
    cnt++;
    }
    fprintf(yyout,
            "{(char *)0, (char *)0, 0, (char *)0, 0, 0},\n");
    fprintf(yyout, "};\n\n");
    item_list = 0;
    /* next the run-time module that does all the "work" */;
}
int end_screen(char *name)
{
    fprintf(yyout, "\tmenu_runtime(menu_%s_items);\n", name);
    if (strcmp(current_screen, name) != 0)
    {
        warning("name mismatch at end of screen",
                current_screen);
    }
    fprintf(yyout, "}\n");
    fprintf(yyout, "/* end %s */\n", current_screen);
    process_items();
    /* write initialization code out to file */
    if (!done_end_init)
    {
        done_end_init = 1;
        dump_data(menu_init);
    }
    current_screen[0] = '\0';
    screen_done = 1;
    return 0;
}
void cfree(char *p)
{
        if (p)
        free(p);
}
/*
 * add_title:
 * Add centered text to screen code.
 */
void add_title(char* line)
{
    int length = strlen(line);
    int space = (SCREEN_SIZE - length) / 2;
    fprintf(yyout, "\tmove(%d,%d);\n", current_line, space);
    current_line++;
    fprintf(yyout, "\taddstr(\"%s\");\n", line);
    fprintf(yyout, "\trefresh();\n");
}
/*
 * add_line:
 * Add a line to the actions table. It will be written
 * out after all lines have been added. Note that some
 * of the information is in global variables.
 */
void add_line(int action, int attrib)
{
    struct item *new;
    new = (struct item *)malloc(sizeof(struct item));
    if (!item_list)
    { /* first item */
        item_list = last_item = new;
    }
    else
    { /* already items on the list */
        last_item->next = new;
        last_item = new;
    }
    new->next = NULL; /* mark end of list */
    new->desc = item_str;
    new->cmd = cmd_str;
    new->action = action;
    switch (action)
    {
    case EXECUTE:
        new->act_str = act_str;
        break;
    case MENU:
        new->act_str = act_str;
        break;
    default:
        new->act_str = 0;
        break;
    }
    new->attribute = attrib;
}
////////////////////////////////////////////////////////////////
char *menu_runtime[] = {
    "/* runtime */",
    "",
    "menu_runtime(items)",
    "struct item *items;",
    "{",
    "\tint visible = 0;",
    "\tint choice = 0;",
    "\tstruct item *ptr;",
    "\tchar buf [BUFSIZ];",
    "",
    "\tfor(ptr = items; ptr->desc != 0; ptr++) {",
    "\t\taddch('\\n'); /* skip a line */",
    "\t\tif(ptr->attribute == VISIBLE) {",
    "\t\t\tvisible++;",
    "\t\t\tprintw(\"\\t%d) %s\",visible,ptr->desc);",
    "\t\t}",
    "\t}",
    "",
    "\taddstr(\"\\n\\n\\t\"); /* tab out so it looks nice */",
    "\trefresh();",
    "",
    "\tfor(;;)",
    "\t{",
    "\t\tint i, nval;",
    "",
    "\t\tgetstr(buf);",
    "",
    "\t\t/* numeric choice? */",
    "\t\tnval = atoi (buf);",
    "",
    "\t\t/* command choice ? */",
    "\t\ti = 0;",
    "\t\tfor(ptr = items; ptr->desc != 0; ptr++) {",
    "\t\t\tif(ptr->attribute != VISIBLE)",
    "\t\t\t\tcontinue;",
    "\t\t\ti++;",
    "\t\t\tif(nval == i)",
    "\t\t\t\tbreak;",
    "\t\t\tif(!casecmp(buf, ptr->cmd))",
    "\t\t\t\tbreak;",
    "\t\t}",
    "",
    "\t\tif (!ptr->desc)",
    "\t\t\tcontinue;\t/* no match */",
    "",
    "\t\tswitch(ptr->action)",
    "\t\t{",
    "\t\tcase QUIT:",
    "\t\t\treturn 0;",
    "\t\tcase IGNORE:",
    "\t\t\trefresh();",
    "\t\t\tbreak;",
    "\t\tcase EXECUTE:",
    "\t\t\trefresh();",
    "\t\t\tsystem(ptr->act_str);",
    "\t\t\tbreak;",
    "\t\tcase MENU:",
    "\t\t\trefresh();",
    "\t\t\t(*ptr->act_menu)();",
    "\t\t\tbreak;",
    "\t\tdefault:",
    "\t\t\tprintw(\"default case, no action\\n\");",
    "\t\t\trefresh();",
    "\t\t\tbreak;",
    "\t\t}",
    "\t\trefresh();",
    "\t}",
    "}",
    "",
    "casecmp(char *p, char *q)",
    "{",
    "\tint pc, qc;",
    "",
    "\tfor(; *p != 0; p++, q++) {",
    "\t\tpc = tolower (*p);",
    "\t\tqc = tolower(*q);",
    "",
    "\t\tif(pc != qc)",
    "\t\t\tbreak;",
    "\t}",
    "\treturn pc-qc;",
    "}",
    0};
    char *screen_init[] = {
    "/* initialization information */",
    "static int init;\n",
    "#include <curses.h>",
    "#include <sys/signal.h>",
    "#include <ctype.h>",
    "#include \"mglyac.h\"\n",
    "/* structure used to store menu items */",
    "struct item {",
    "\tchar *desc;",
    "\tchar *cmd;",
    "\tint action;",
    "\tchar *act_str",
    "\tint (*act_menu)();",
    "\tint attribute;",
    "};\n",
    0,
};
int check_name(char* name)
{
    static char **names = 0;
    static name_count = 0;
    char **ptr, *newstr;
    if (!names)
    {
        names = (char **)malloc(sizeof(char *));
        *names = 0;
    }
    ptr = names;
    while (*ptr)
    {
        if (strcmp(name, *ptr++) == 0)
            return 0;
    }
    /* not in use */
    name_count++;
    names = (char **)realloc(names, (name_count + 1) * sizeof(char *));
    names[name_count] = 0;
    newstr = strdup(name);
    names[name_count - 1] = newstr;
    return 1;
}
char *menu_init[] = {
    "menu_init()",
    "{",
    "\tvoid menu_cleanup();\n",
    "\tsignal(SIGINT, menu_cleanup);",
    "\tinitscr();",
    "\tcrmode();",
    "}\n\n",
    "menu_cleanup()",
    "{",
    "\tmvcur(0, COLS - 1, LINES - 1, 0);",
    "\tendwin();",
    "}\n",
    0,
};