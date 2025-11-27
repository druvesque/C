#include<stdio.h>

void main() {
    char str[100];
    puts("Enter a string: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122)
           str[i] = str[i] - 32;
        i++;
    }
    printf("Converted string: %s", str);
}
