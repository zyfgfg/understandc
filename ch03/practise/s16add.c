#include<stdio.h>
int main(void)
{
    int x,y;
puts("当前是加法");
    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);

    printf("%d + %d\n",x,y);
    printf("结果是%d\n",x+y);
}