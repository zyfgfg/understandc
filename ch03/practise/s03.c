#include<stdio.h>
int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0)
        puts("该整数为0\n");
    else if (no > 0)
        printf("绝对值为%d。\n",no);
    else if (no < 0)
        printf("绝对值为%d。\n",-no);
    return 0;
}