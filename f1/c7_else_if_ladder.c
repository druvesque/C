#include<stdio.h>

int main() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0)
        printf("%d is divisible by 2, 3, and 5", num);
    else if (num % 2 == 0 && num % 3 == 0)
        printf("%d is divisible by 2 and 3", num);
    else if (num % 2 == 0 && num % 5 == 0)
        printf("%d is divisble by 2 and 5", num);
    else if (num % 3 == 0 && num % 5 == 0)
        printf("%d is divisible by 3 and 5", num);
    else
        printf("%d is divisible by none", num);
    return 0;
}
