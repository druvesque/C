#include<stdio.h>

void main() {
    char str1[100];
    char str2[100];
    puts("Enter str1: ");
    gets(str1);
    puts("\n");
    puts("Enter str2: ");
    gets(str2);
    char str3[200];
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        str3[i] = str1[i];
    }
    for (int j = 0; str2[j] != '\0'; j++) {
        str3[i] = str2[j];
        i++;
    }
    str3[i] = '\0';
    printf("\nConcatenated String: %s", str3);
}
