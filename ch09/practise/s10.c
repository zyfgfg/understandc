#include <stdio.h>

void del_digit(char s[]) {
    
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main(void) {
    char s[] = "ABvivhvsohvovo  1C9";

    del_digit(s);
    printf("删除数字字符后为：%s\n", s);

    return 0;
}