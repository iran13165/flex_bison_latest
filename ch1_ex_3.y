%{ 
      /*
 * A lexer for the basic grammar to use for recognizing English sentences.
 */
      #include <stdio.h>
      void yyerror(char *s);
      int yylex();
%}

%token NOUN PRONOUN VERB ADVERB ADJECTIVE PREPOSITION CONJUNCTION

%%
sentence: subject VERB object{ printf("Sentence is valid.\n"); }
        ;
subject: NOUN 
      | PRONOUN
      ;
object: NOUN
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