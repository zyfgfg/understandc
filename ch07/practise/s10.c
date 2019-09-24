#include <stdio.h>
int main(void) {
    float y = 0.0;

    for (int i=0;i <= 100; i++) {
        printf("x=%f x=%f\n", y, i / 100.0);
    

    y += 0.01;}
    return 0;
}