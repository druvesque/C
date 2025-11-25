#include<stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverse;
    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }
    printf("Reverse: %d", reverse);

    if (reverse == n)
        printf("\nPalindrome Number!");
    else
        printf("\nNot a Palindrome Number!");
}

