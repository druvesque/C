#include<stdio.h>
int fact(int);
int ncr(int, int);

int main() {
    int n, ws;
    printf("\nEnter number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        ws = n - i - 1;
        for (int j = 0; j < ws; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", ncr(i, k));
        }
        printf("\n");
    } 
    return 0;
}

int fact(int n) {
    int factorial = 1;

    if (n == 0)
        return 1;

    while (n != 1) {
        factorial = factorial * n;
        n--;
    }
    return factorial;
}

int ncr(int n, int r) {
    if (r < 0)
        r = 0;
    int numerator = fact(n);
    int denominator = fact(r) * fact(n-r);
    return (numerator/denominator);
}
