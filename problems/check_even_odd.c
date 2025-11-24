#include<stdio.h>
void main() {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i < 0)
        printf("Invalid");
    else if ((i%2) == 0)
        printf("Even");
    else
        printf("Odd");
}
