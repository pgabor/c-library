#include <stdlib.h>
#include <stdio.h>

//Visszater a sorok szamaval
void readFileToArray(FILE * file, char *** c, int * lineCount, int maxLineLength)
{
    char ** content = NULL;
    *lineCount = 0;
    char * line = (char*)malloc(maxLineLength+1);

    while( fgets(line, sizeof(line), file) != NULL)
    {
        if (*lineCount == 0)
        {
            content = (char**) malloc(sizeof(char*));
        }
        else
        {
            char ** newcontent = (char**) realloc(content, sizeof(char*) * (*lineCount+1));
            if (newcontent == NULL)
            {
                free(line);
                break;
            }
            else
            {
                content = newcontent;
            }
        }

        content[*lineCount] = line;
        *lineCount = *lineCount+1;
        line = (char*)malloc(maxLineLength+1);
    }
    if (*lineCount == 0)
    {
        free(line);
    }
    *c = content;
}