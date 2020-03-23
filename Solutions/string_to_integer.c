#include<stdio.h>
#include <string.h>
void string_to_integer(char str[]);
int main()
{
    char str[20];
    scanf("%s ",&str);
    string_to_integer(str);
}
void string_to_integer(char str[])
{
    static int index=0;
    char digit;
    digit = str[index];
    static long long int integer=0;
    integer = integer*10 + ((int)(digit)-48);
    index++;
    if(index < strlen(str))
    string_to_integer(str);
    else
        printf("%lld",integer);
}





