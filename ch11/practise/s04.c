#include <stdio.h>
#include<string.h>
/*将字符串s复制到d*/
void put_string(const char *s) { do {putchar(*s);} while (*s++) ;}
int main(void) {
    char *s = "wgdsgfhsdjhk";
    put_string(s);
printf("\n");
    return 0;
}