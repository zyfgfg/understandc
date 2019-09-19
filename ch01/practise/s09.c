#include <stdio.h>

int main(void) {
    int vx, vy, vz;
    printf("整数1:"); scanf("%d", &vx);
    printf("整数2:"); scanf("%d", &vy);
    printf("整数3:"); scanf("%d", &vz);


    printf("它们的和是%d。\n", vx + vy + vz);
    return 0;
}