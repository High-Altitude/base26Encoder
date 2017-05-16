#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* main(int argc, char *argv[])
{
    int value;
    value = atoi(argv[1]);
    if(value == 0)
        {
            return NULL;
        }
    char *result;
    result = (char*) malloc(sizeof(result));
    strcpy(result, "");
    char *charactor;
    charactor = (char*) malloc(sizeof(charactor));
    strcpy(charactor, "");
    char *dup;
    dup = (char*) malloc(sizeof(dup));
    strcpy(dup, "");
    int calc = 0;
    int mod = 0;
    int whole = 0;
    memset(result, 0, sizeof(result));
    whole = value -1;
    //printf("whole is: %d \n", whole);
    while(whole >= 0)
        {
            mod = whole % 26;
            calc = 65 + mod;
            sprintf(charactor, "%c", calc);
            sprintf(result, "%s%s", charactor,(dup = strdup(result)));
            whole = (whole / 26) - 1;
        }
    printf("%s", result);
    return result;
}
