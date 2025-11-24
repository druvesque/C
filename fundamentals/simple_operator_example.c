#include<stdio.h>
void main() {
    int a, b, c;
    printf("\nEnter 2 Values: \n");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("\nProduct = %d", c);
    c = (a = 3, b + a);
    printf("\nResult = %d", c);
    c = (a > b) ? a : b;
    printf("\nGreater Number = %d", c);
}
