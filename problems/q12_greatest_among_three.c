#include<stdio.h>

int main() {
    int a, b, c;
    printf("\nEnter num1: ");
    scanf("%d", &a);
    printf("\nEnter num2: ");
    scanf("%d", &b);
    printf("\nEnter num3: ");
    scanf("%d", &c);
    int max = (a > b && a > c) ? a : ((b > c) ? b : c);
    printf("\nMaximum: %d", max);
    return 0;
}
