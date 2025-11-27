#include<stdio.h>
void main() {
    int i;
    char str[] = "hello";
    printf("%d\n", sizeof(str));
    char *str1 = str;
    printf("%c\n", *str1);
    printf("%s\n", (str1 + 1));
    printf("%s\n", str1);
    char *str2 = "sahil";
    printf("%s\n", str2);
    printf("%s\n", (str2+2));
    for (i = 0; i < 3; i++) {
        printf("%c", str[i]);
        printf("\n");
    }
}
