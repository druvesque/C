#include<stdio.h>
void main() {
    char str[100];
    puts("Enter the string: ");
    gets(str);
    int i = 0;
    printf("String to num: ");
    while (str[i] != '\0') {
        printf("%d ", str[i]);
        i++;
    }
}
