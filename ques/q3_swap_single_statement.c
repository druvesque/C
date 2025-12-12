#include<stdio.h>

int main() {
    int a = 5, b = 6;
    printf("Before Swapping, a: %d, b: %d", a, b);
    a = (a = a^b, b = a^b, a = a^b);
    printf("\nAfter Swapping, a: %d, b: %d", a, b);
    return 0;
}
