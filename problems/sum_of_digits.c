#include<stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0) {
        int remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("Sum of digits: %d", sum);
}
