%{  
#include <stdlib.h>
#include <stdio.h>

int charCount=0;
int wordCount=0;
int lineCount=0;
int argc;
char** argv;
int main(int argc, char** argv);
%}
%%
\n      {charCount++; lineCount++;}   
[^ \t\n]+   {wordCount++; charCount+=yyleng; printf("word : %s",yytext); printf("  %d\n",yyleng); }
.       {charCount++;}
%%

int main(int argc, char** argv)
{           
    if (argc > 1)
    {
        FILE *file;
        file = fopen(argv[1], "r");
        if (!file)
        {
            fprintf(stderr, "Could not open %s\n", argv[1]);
            return 1;
        }
        yyin = file;
       // printf(yyin);
    }

    yylex();
    printf("char count : %d\n  word count:  %d\n   line count :%d\n", charCount, wordCount, lineCount);
    return 1;
}






