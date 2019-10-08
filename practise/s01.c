#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void) {
    int t, c;





    do {
        srand((unsigned)time(NULL));

        c = rand() % 100;

        if (c >= 0 && c <= 4) {
            printf("大吉\n");
        } else if (c > 5 && c <= 14) {
            printf("中吉\n");
        } else if (c > 14 && c <= 29) {
            printf("小吉\n");
        } else if (c > 29 && c <= 59) {
            printf("吉\n");
        } else if (c > 59 && c <= 79) {
            printf("末吉\n");
        } else if (c > 79 && c <= 94) {
            printf("凶\n");
        } else if (c > 94 && c <= 99) {
            printf("大凶\n");
        }

        printf("是否要继续1....继续"); scanf("%d", &t);
    } while (t == 1);

}
