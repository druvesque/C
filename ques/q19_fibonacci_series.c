#include<stdio.h>

int main() {
    int a = 0, b = 1, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n == 1)
        printf("The fibonacci series is: %d", a);
    else if (n == 2)
        printf("The fibonacci series is: %d, %d", a, b);
    else {
        int next_term;
        printf("The fibonacci series is: %d\t%d", a, b);
        for (int i = 3; i <= n; i++) {
            next_term = a + b;
            a = b;
            b = next_term;
            printf("\t%d", b);
        }
    }
    return 0;
}
