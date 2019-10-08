#include<stdio.h>
int max(int x, int y);
extern int s13add(int, int);
extern int s14mul(int, int);
extern int s15sub(int, int);
extern int s16div(int, int);

int main(void) {
    int a;
    int x;
    int y;
    printf("请输入1...加法，2...乘法，3...减法，4...除法\n");
    scanf("%d", &a);

    switch (a) {
    case 1: printf("%d", s13add(x, y)); break;

    case 2: printf("%d", s14mul(x, y)); break;

    case 3: printf("%d", s15sub(x, y)); break;

    case 4: printf("%d", s16div(x, y)); break;

    default: puts("输入错误");
    }

    printf("\n");
    return 0;

}
