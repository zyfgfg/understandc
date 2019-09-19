#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);

    while (no-- > 0)
        putchar('*');
    putchar('\n');
if(no--<0){putchar('*');}
    return 0;
}