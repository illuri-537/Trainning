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
/*void input_str(char *str)
{
    __fpurge(stdin);
    fgets(str,length,stdin);
    validate_str(str);
}*/
