#include<stdio.h>

void main() {
    int a = 5, b = 6, c;
    c = a*b;
    printf("Product: %d", c);
    c = (a = 3, b + a);
    printf("\nResult: %d", c);
    c = (a > b) ? a : b;
    printf("\nGreater Number: %d", c);
}
