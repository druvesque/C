#include<stdio.h>

int main() {
    int n, sum = 0;
    printf("\nEnter number: ");
    scanf("%d", &n);
    while (n != 0) {
        int remainder = n % 10;
        sum = sum + remainder;
        n = n/10;
    }
    printf("\nSum of digits: %d", sum);
    return 0;
}
