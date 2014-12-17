#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Saját headerek
#include "random.h"
//long randomWithMax(unsigned long max) -> [0,max] intervallumon véletlenszám
#include "text.h"
//void readFileToArray(FILE * f, char *** c, int * lineCount, int maxLineLength)
//void deleteOccurance(char * s1, char * s2)
int main(int argc, char *argv[])
{
    FILE * f = fopen("random.h", "r");
    char ** m;
    int h;
    readFileToArray(f, &m, &h, 255);
    for (int i = 0; i < h; i++)
    {
        deleteOccurance(m[i], "a");
        printf("%s", m[i]);
    }
    return 0;
}
