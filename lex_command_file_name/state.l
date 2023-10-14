%s MAGIC
%%
magic  BEGIN MAGIC;
. ECHO;
<MAGIC>.+ { BEGIN 0; printf("hi"); ECHO; }

%%
main() {
yylex(); 
}
