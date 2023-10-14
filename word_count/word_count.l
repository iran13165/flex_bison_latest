%{
    #include <stdio.h>
    #include <stdlib.h>
    unsigned charCount = 0, wordCount = 0, lineCount = 1;
%}
word [^ \t\n]+
eol \n

%%
{word}      { wordCount++; charCount += yyleng; }
{eol} { charCount++; lineCount++; }
.     {charCount++;}
%%
int main(int argc, char** argv) 
{
    printf("%s\n", argv[0]);
    if(argc>1)
    {
        FILE *file;
        file = fopen(argv[1], "r");
         if (!file) {
            fprintf(stderr,"could not open %s\n",argv[1]);
            exit(1); 
            }
        yyin = file;
    }

    yylex();
    printf("line count = %d , word count = %d , char count = %d\n",lineCount, wordCount, charCount);
    return 0;
}