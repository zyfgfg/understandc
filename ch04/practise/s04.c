#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no >= 1)
        printf("%d ", no--);

    printf("\n");
    if (no<0)
    {
       printf("%d ", no--);
    }

    return 0;
}