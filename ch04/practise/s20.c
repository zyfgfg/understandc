#include <stdio.h>

int main(void) {
    int i, j;

    printf("   |");
for (int i = 1; i <= 9; i++)
{
    printf("%3d", i);
}
    printf("\n");
    for (int i = 1; i <= 30; i++)
{
    printf("-");
}
    printf("\n");
    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++)
            if (j==0){printf("%d  |",i);}
                else {printf("%3d", i * j);}
        putchar('\n');
    }
printf("\n" );
    return 0;
}