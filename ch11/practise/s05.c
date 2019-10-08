#include <stdio.h>
#include<string.h>
/*将字符串s复制到d*/
int str_chnum(const char *s, int c) {
    int i = 0;

    while (*s) {
        if (*s == c) {
            i++;
        }

        s++;
    }



    return i;
}
int main(void) {
    char *s ;
    char c;

    printf("请输入字符串："); scanf("%s", s);
    printf("请输入目标字符："); scanf(" %c", &c);

    printf("字符串%s中含有%d个%c\n", s, str_chnum(s, c), c);

    return 0;
}