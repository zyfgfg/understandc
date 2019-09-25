#include <stdio.h>

/*返回阶乘的值*/
int factorial(int n) {
    int sum;

    for (int i = 0; i < n; i++) { sum = n * (n - 1);}

    return sum;
}
int main(void) {
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("%d的阶乘为%d\n", num, factorial(num));

    return 0;
}