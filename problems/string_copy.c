#include<stdio.h>

void main() {
    char str[100];
    char cpy[100];
    puts("Enter the string: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0') {
        cpy[i] = str[i];
        i++;
    }
    printf("\nCopy of the string: %s", cpy);
}
