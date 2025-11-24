#include<stdio.h>
void main() {
    int a, b;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping, a: %d, b: %d", a, b);
    a = ((a = a + b), (b = a - b), (a = a - b));
    // (a = a ^ b, b = a ^ b, a = a ^ b); // alternate solution using xor
    printf("\nAfter Swapping, a: %d, b: %d", a, b);
}
