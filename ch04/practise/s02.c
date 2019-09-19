#include <stdio.h>

int main(void) {
    int a, b;
    int sum, min, max;

    printf("请输入两个整数。\n");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    if (a > b) {
        max = a; min = b;
    } else {
        max = b; min = a;
    }

    int i = min;
    sum = 0;

    do {
        sum += i++;
        
    } while (i <= max);

    printf("所有整数的和是%d\n", sum);

    return 0;
}