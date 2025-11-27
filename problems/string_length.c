#include<stdio.h>

void main() {
    char string[100];
    puts("Enter the string: ");
    gets(string);
    int i = 0, len = 0;
    while (string [i] != '\0') {
        len++;
        i++;
    }
    printf("\nLength of the string: %d", len);
}
