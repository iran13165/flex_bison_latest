/* initialization information */
static int init;
#include <stdlib.h>
#include <curses.h>
#include <sys/signal.h>
#include <ctype.h>
#include "y.tab1.h"
int casecmp(char *p, char *q);
void menu_cleanup();
void menu_init();
struct item* menu_runtime(struct item *items);

/* structure used to store menu items */
struct item
{
    char *desc;
    char *cmd;
    int action;
    char *act_str;     /* execute string */
    int (*act_menu)(); /* call appropriate function */
    int attribute;
}
/* screen first */
menu_first()
{
    extern struct item menu_first_items[];
    if (!init)
        menu_init();
    clear();
    refresh();
    move(0, 37);
    addstr("First");
    refresh();
    menu_runtime(menu_first_items);
}
/* end first */
struct item menu_first_items[] = {
    {"dummy line", "dummy", 269, "", 0, 271},
    {"run shell", "shell", 265, "/bin/sh", 0, 271},
    {(char *)0, (char *)0, 0, (char *)0, 0, 0},
};
void menu_init()
{
     menu_cleanup();
    signal(SIGINT, menu_cleanup);
    initscr();
    crmode();
}
void menu_cleanup()
{
    mvcur(0, COLS - 1, LINES - 1, 0);
    endwin();
}
/* screen second */
menu_second()
{
    extern struct item menu_second_items[];
    if (!init)
        menu_init();
    clear();
    refresh();
    move(0, 37);
    addstr("Second");
    refresh();
    menu_runtime(menu_second_items);
}
/* end second */
struct item menu_second_items[] = {
    {"exit program", "exit", 268, "", 0, 272},
    {"other menu", "first", 267, "", menu_first, 271},
    {(char *)0, (char *)0, 0, (char *)0, 0, 0},
};
/* runtime */
struct item* menu_runtime(struct item *items)
{
    int visible = 0;
    int choice = 0;
    struct item *ptr;
    char buf[BUFSIZ];
    for (ptr = items; ptr->desc != 0; ptr++)
    {
        addch('\n'); /* skip a line */
        if (ptr->attribute == VISIBLE)
        {
            visible++;
            printw("\t%d) %s", visible, ptr->desc);
        }
    }
    addstr("\n\n\t"); /* tab out so it looks nice */
    refresh();
    for (;;)
    {
        int i, nval;
        getstr(buf);
        /* numeric choice? */
        nval = atoi(buf);
        /* command choice ? */
        i = 0;
        for (ptr = items; ptr->desc != 0; ptr++)
        {
            if (ptr->attribute != VISIBLE)
                continue;
            i++;
            if (nval == i)
                break;
            if (!casecmp(buf, ptr->cmd))
                break;
        }
        if (!ptr->desc)
            continue; /* no match */
        switch (ptr->action)
        {
        case QUIT:
            //return void*(0);
        case IGNORE:
            refresh();
            break;
        case EXECUTE:
            refresh();
            system(ptr->act_str);
            break;
        case MENU:
            refresh();
            (*ptr->act_menu)();
            break;
        default:
            printw("default case,  no action\n");
            refresh();
            break;
        }
        refresh();
    }
}
int casecmp(char *p, char *q)
{
    int pc, qc;
    for (; *p != 0; p++, q++)
    {
        pc = tolower(*p);
        qc = tolower(*q);
        if (pc != qc)
            break;
    }
    return pc - qc;
}