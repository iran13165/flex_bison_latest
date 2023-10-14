%{
// #undef input
// #undef unput
#include <stdio.h>
#include <string.h>
unsigned verbose;
unsigned fname;
char *progName;
char* filename;
//#undef YY_INPUT
//#define YY_INPUT(b,r,s) readInputForLexer(b,&r,s)
//int readInputForLexer( char *buffer, unsigned long *numBytesRead, int maxBytesToRead );
// -h    |
// "-?"  |
// -help { printf("usage is: %s [-help | -h | -? ] [-verbose | -v] "
//        "[(-file| -f) filename]\n", progName);
//       }
// -v    |
// -verbose { printf("verbose mode is on\n"); verbose = 1; }
%}
%s FNAME
%%
-h    |
"-?"  |
-help { printf("usage is: %s [-help | -h | -? ] [-verbose | -v] "
       "[(-file| -f) filename]\n", progName);
      }
-v    |
-verbose { printf("verbose mode is on\n"); verbose = 1; }
[ ]+  { ; }
-f    |
-file       { 
                  BEGIN FNAME; fname = 1; 
            }
<FNAME>[^ ]+ { printf("use file %s\n", yytext); BEGIN 0; fname = 2;filename = yytext;}
%%
char **targv;     /* remembers arguments */
char **arglim;    /* end of arguments */

// static int globalReadOffset;
// // Text to read:
// static const char *globalInputText = "567+234";
// int readInputForLexer( char *buffer, unsigned long *result, int max_size ) {
//     int numBytesToRead = max_size;
//     printf("numBytesToRead = %d\n",numBytesToRead);
//     int bytesRemaining = strlen(globalInputText)-globalReadOffset;
//     int i;
//     if ( numBytesToRead > bytesRemaining ) { 
//         printf("equal numBytesToRead = bytesRemaining\n");
//         numBytesToRead = bytesRemaining;
//      }
//     for ( i = 0; i < numBytesToRead; i++ ) {
//         buffer[i] = globalInputText[globalReadOffset+i];
//     }
//     *result = numBytesToRead;
//     printf("result = %lu\n",*result);
//     globalReadOffset += numBytesToRead;
//     return 0;
// }
int main(int argc, char **argv)
{
      progName = *argv;
      targv = argv+1;
      arglim = argv+argc;


      if(fname < 2)
      {
            printf("No filename given\n");
      } else
      {
        FILE *file;
        printf("%s", filename);
        file = fopen(filename, "r");
         if (!file) {
            fprintf(stderr,"could not open %s\n",argv[1]);
            exit(1); 
            }
        yyin = file;
         
      }
      yylex();
      return 0;
}