#include<stdio.h>

int main() {
    int n, factorial = 1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while (n != 1) {
        factorial = factorial * n;
        n--;
    }
    printf("\nFactorial: %d", factorial);
    return 0;
}
