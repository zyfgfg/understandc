#include<stdio.h>
#define swap(type,a,b){type temp=a;a=b;b=temp;}
int main(int argc, char const *argv[]) {
    int x ,y;
printf("输入整数x：" );scanf("%d",&x);
printf("输入整数y：" );scanf("%d",&y);
    swap(int,x,y);
    printf("x的值是：%d\ny的值是：%d\n", x, y);
    return 0;
}