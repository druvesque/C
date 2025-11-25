#include<stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid");
        return;
    }
    else if (n == 1 || n == 0) {
        printf("Neither Prime nor Composite");
        return;
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("Composite");
                return;
            }
        }
    }
    printf("Prime");

}
