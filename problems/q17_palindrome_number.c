#include<stdio.h>

int main() {
    int n, cpy, rev = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    cpy = n;
    while (cpy != 0) {
        int remainder = cpy % 10;
        cpy = cpy / 10;
        rev = rev * 10 + remainder;
    }
    if (n == rev)
        printf("\nPalindrome Number!");
    else
        printf("\nNot a palindrome number!");
    return 0;
}
