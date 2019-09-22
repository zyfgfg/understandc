#include <stdio.h>

int main(void)
{
    int i;
    int v[7];

    for (i = 6; i > 0; i--)
        v[i] = i-1 ;

    for (i = 6; i > 0; i--)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}