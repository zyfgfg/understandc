#include <stdio.h>
unsigned rrotate(unsigned x, int n) {return x >> n;}
unsigned lrotate(unsigned x, int n) {
    return x << n;
}
int main(void) {
    unsigned x, y;
    printf("输入整数：");scanf("%u", &x);
    printf("位移位数：");scanf("%u", &y);
    printf("右移%d位数为：%d\n", y, rrotate(x, y));
    printf("左移%d位数为：%d\n", y, lrotate(x, y));
    return 0;
}