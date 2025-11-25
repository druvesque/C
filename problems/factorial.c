#include<stdio.h>
void main() {
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        factorial *= n;
        n--;
    }
    printf("Factorial: %d", factorial);
}
