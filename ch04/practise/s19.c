#include <stdio.h>

int main(void) {
    int i , n, x = 0, sum;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0) {
            printf("%d\n ", i);


            x += 1;
        }

    }

    sum += x;
    printf("约数有%d个。", sum);
    putchar('\n');

    return 0;
}

