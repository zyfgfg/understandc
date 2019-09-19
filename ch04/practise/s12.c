#include <stdio.h>

int main(void)
{
    int no1,no2,no3;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &no1);
        no2=no1;
        if (no1 <= 0)
            puts("请不要输入非正整数！！！");
    } while (no1 <= 0);

    no2 = no1;
    no3 = 0;

    while (no1 > 0) {
        no1 /= 10;
        no3++;
    }
    
    printf("\n");
printf("输入%d的位数为%d\n",no2, no3);

    return 0;
}