#include<stdio.h>

int main() {
    char str[] = "hello";
    char *str1 = str;
    printf("\n%s", str1);
    char *str2 = "world";
    printf("\n%s", str2);
    return 0;
}
