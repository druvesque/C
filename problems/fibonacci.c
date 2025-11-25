#include<stdio.h>
void main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int first_term = 0, second_term = 1;
    if (n <= 0)
        printf("Invalid");
    else if (n == 1)
        printf("Fibnocci Series: 0");
    else if (n == 2)
        printf("Fibonacci Series: 0 1");
    else {
        printf("Fibnoacci Series: 0 1");
        for (int i = 2; i < n; i++) {
            int next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
            printf(" %d", next_term);
        }
    }

}
