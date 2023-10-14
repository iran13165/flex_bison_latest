%{
    #include <stdio.h>
    void yyerror(char *s);
    int yylex();
%}
%token NAME NUMBER
%%
statement:   NAME '='  expression
              |      expression         { printf("= %d\n", $1); }
              ;
expression:  expression '+' NUMBER { $$ = $1 + $3; }
              |      expression '-' NUMBER { $$ = $1 - $3; }
              |      NUMBER                { $$ = $1; }
              ;
%%
extern FILE *yyin;
int main() {
      do {
            yyparse();
     }
      while (!feof(yyin));
}
void yyerror( char* s)
{
    fprintf(stderr, "%s\n", s);
}