#include <stdio.h>

int main(void)
{
    char s[]="ABC";

 s[0]='\0' ;

    printf("字符串s[]为\"%s\".\n", s);

    return 0;
}