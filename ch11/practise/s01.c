#include <stdio.h>

int main(void)
{
    char *p = "456"+1;
    printf("p = \"%s\"\n", p);
    p = "456";/*OK!*/
    printf("p = \"%s\"\n", p);
    return 0;
}