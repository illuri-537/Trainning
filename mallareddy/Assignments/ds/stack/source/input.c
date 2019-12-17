#include"header.h"
int input()
{
    int input;
    char *number;
    number=(char*)malloc(10*sizeof(char));
    fgets(number,10,stdin);
    input=validate(number);
    return input;
}

