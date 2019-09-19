#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("n：");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) {
        sum += i;
    }

    printf("1到n的和为：%d\n", sum);

    return 0;
}
