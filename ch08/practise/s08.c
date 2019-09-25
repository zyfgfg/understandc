#include <stdio.h>

int gcd(int x, int y) {
    int remainder = x % y;

    if (remainder == 0) {
        return y;
    } else {
        return gcd(y, remainder);
    }
}

int main(void) {
    int x, y;

    printf("请输入正整数x："); scanf("%d", &x);
    printf("请输入正整数y："); scanf("%d", &y);

    if (y > x) {
        int temp = x;
        x = y;
        y = temp;

    }

    printf("%d和%d最大公约数为%d：\n", x, y, gcd(x, y));

    return 0;
}