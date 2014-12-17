#include <string.h>
#include <stdio.h>

//Visszater az adott kapcsolohoz tartozo parameterrel, "" ha utolso kapcsolo volt, ha nincs akkor 0
char * valueOfArgument(int * argc, char ** argv, char * value)
{
    char * ret = 0;
    for (int i = 0; i < *argc; i++)
    {
        if (strcmp(argv[i], value) == 0)
        {
            if (i + 1 < *argc)
            {
                ret = (char*) malloc(sizeof(char) * (strlen(argv[i])+1));
                strcpy(ret,argv[i+1]);
            }
            else
            {
                ret = (char*) malloc(sizeof(char));
                ret = "";
            }
            break;
        }
    }
    return ret;
}