#include<stdio.h>
void main() {
    int a, b, c;
    printf("Enter 3 Numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Greatest of given 3 numbers: %d", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
}
