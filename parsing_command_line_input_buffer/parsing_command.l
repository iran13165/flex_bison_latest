%{
#include <stdio.h>
#include <string.h>
//#undef YY_INPUT
//#define YY_INPUT(b,r,s) readInputForLexer(b,&r,s)
//int readInputForLexer( char *buffer, unsigned long *numBytesRead, int maxBytesToRead );
unsigned verbose;
char *progName;
%}
%%
-h    |
"-?"  |
-help { printf("usage is: %s [-help | -h | -? ] [-verbose | -v] "
       "[(-file| -f) filename]\n", progName);
      }
-v    |
-verbose { printf("verbose mode is on\n"); verbose = 1; }
%%
static int globalReadOffset;
// Text to read:
static const char *globalInputText = "567+234";
int readInputForLexer( char *buffer, unsigned long *result, int max_size ) {
    int numBytesToRead = max_size;
    printf("numBytesToRead = %d\n",numBytesToRead);
    int bytesRemaining = strlen(globalInputText)-globalReadOffset;
    int i;
    if ( numBytesToRead > bytesRemaining ) { 
        printf("equal numBytesToRead = bytesRemaining\n");
        numBytesToRead = bytesRemaining;
     }
    for ( i = 0; i < numBytesToRead; i++ ) {
        buffer[i] = globalInputText[globalReadOffset+i];
    }
    *result = numBytesToRead;
    printf("result = %lu\n",*result);
    globalReadOffset += numBytesToRead;
    return 0;
}

int main(int argc, char** argv)
{
    globalReadOffset=0;
    progName = *argv;
    yylex();
 }