#include<stdio.h>
void main() {
    char ip;
    printf("Enter a character: ");
    scanf("%c", &ip);
    if (ip == 'A' || ip == 'E' || ip == 'I' || ip == 'O' || ip == 'U' || ip == 'a' || ip == 'e' || ip == 'i' || ip == 'o' || ip == 'u')
        printf("Vowel");
    else
        printf("Consonant");
}
