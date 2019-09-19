#include<stdio.h>
int main(int argc, char const *argv[]) {
    int x,y;
    printf("请输入一个整数：");
    scanf("%d", &x);
printf("请输入一个整数：");
    scanf("%d", &y);
    if (x == y)
    {puts("相等");}
    else {
        puts("不相等")
        ;
    }

    return 0;
}