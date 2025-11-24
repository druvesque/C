#include<stdio.h>
int main() {
    int a, b;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping, a: %d, b: %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Swapping: a %d, B: %d", a, b);
    return 0;
}
