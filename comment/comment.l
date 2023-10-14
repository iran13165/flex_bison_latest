%{
int comments, code, whiteSpace;
%}
%x COMMENT
%%
^[ \t]*"/*" { BEGIN COMMENT; /* enter comment eating state */ }
^[ \t]*"/*".*"*/"[ \t]*\n {
             comments++;     /* self-contained comment */
             }
<COMMENT>"*/"[ \t]*\n  { BEGIN 0; comments++;}
<COMMENT>"*/"          { BEGIN 0; }
<COMMENT>\n { comments++; }
<COMMENT>.\n    { comments++; }
^[ \t]*\n   { whiteSpace++; }
.+"/*".*"*/".*\n  { code++; }
.*"/*".*"*/".+\n  { code++; }
.+"/*".*\n
.\n
.
%% 

int main(int argc, char** argv) {
FILE *f = fopen("lex.yy.c", "r");
yyin = f;
yylex();
printf("code: %d, comments %d, whitespace %d\n",
      code, comments, whiteSpace);
}