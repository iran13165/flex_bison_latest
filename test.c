#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NSYMS 20 /* maximum number of symbols */
//void yyerror(char *s);
struct symtab
{
    char *name;
    int value;
} table[NSYMS];
struct symtab *symlook(char *s);
int main()
{
    for (size_t i = 0; i < 3; i++)
    {
        char name[20];
        int value;
        printf("enter variable name: \n");
        scanf("%s", name);
        printf("enter value: \n");
        scanf("%d", &value);
        struct symtab *st = symlook(name);
        st->value = value;
    }
    struct symtab* sp;
    for (sp = table; sp < &table[NSYMS] && sp->name != NULL; sp++)
    {
        printf("name = %s and value = %d\n", sp->name, sp->value);
    }
    
   
    return 0;
}
struct symtab *symlook(char *s)
{
    char *p;
    struct symtab *sp;
    for (sp = table; sp < &table[NSYMS]; sp++)
    {
        /* is it already here? */
        if (sp->name && !strcmp(sp->name, s))
            return sp;
        /* is it free */
        if (!sp->name)
        {
            sp->name = strdup(s);
            return sp;
        }
        /* otherwise continue to next */
    }
   // yyerror("Too many symbols");
    exit(1); /* cannot continue */
} /* symlook */
