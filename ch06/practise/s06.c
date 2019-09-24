#include <stdio.h>

void alert(int n) {
    for (int i = 0; i < 10; i++) {
        putchar('\a') ;
    }
} void alert2(int n) {
    for (int i = 0; i < 10; i++) {
        putchar('\a') ;
    }
}



int main(void) {
    int a, b;


    alert(a);
    alert2(b);
    return 0;
}