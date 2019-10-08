#include <stdio.h>

void adjust_point(int *n){if (*n < 0) {
        *n = 0;
    } else if (*n > 100) {
        *n = 100;
    }

}


int main(void) {
    int x;
    printf("请输入数字"); scanf("%d", &x);
    adjust_point(&x);

    printf("输入的数字为%d\n", x);

    return 0;
}