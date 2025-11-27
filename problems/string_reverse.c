#include<stdio.h>
void main() {
    char str[100];
    char rev[100];
    puts("Enter a string: ");
    gets(str);
    int len = 0;
    int i = 0;
    while (str[i] != '\0') {
        len = len + 1;
    }
    int temp_len = len;
    int j = 0;
    while (j > len) {
        rev[j] = str[temp_len];
        temp_len--;
        j++;
    }
    rev[i] = '\0';
    printf("\nReversed String: %s", rev);
}
