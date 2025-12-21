#include<stdio.h>

int main() {
    int n;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("\nNeither Prime nor Composite");
        return 0;
    }
    else {
        for (int i = 2; i < n; i++){
            if (n % i == 0) {
                printf("\nComposite Number");
                return 0;
            }
        }
    }
    printf("\nPrime Number");
    return 0;
}
