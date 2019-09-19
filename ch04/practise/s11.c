#include <stdio.h>

int main(void)
{
    int no1,no2;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &no1);
        no2=no1;
        if (no1 <= 0)
            puts("请不要输入非正整数！！！");
    } while (no1 <= 0);

    printf("该整数逆向显示的结果是：");
    while (no1 > 0) {
        printf("%d", no1 % 10);
        no1 /= 10;
    }
    printf("\n");
printf("输入的整数为%d\n",no2);

    return 0;
}