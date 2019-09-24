#include <stdio.h>

int main(void) {
    static double d[5];

    for (int i = 0; i < 5; i++) {
        printf("d[%d]:%.1f\n", i, d[i]);
    }

    return 0;
}