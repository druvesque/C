#include<stdio.h>
void main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a & 1)
        printf("Odd");
    else
        printf("Even");
}
