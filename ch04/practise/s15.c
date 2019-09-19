#include <stdio.h>

int main(void) {
    int i ;
    

    for (i = 155; i <= 195; i += 5) {


        printf("%dcm", i); printf("  %.2fkg", (i - 100) * 0.9); printf("\n");
    }

    printf("\n");
    return 0;
}
