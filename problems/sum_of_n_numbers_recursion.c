#include<stdio.h>

int sum_of_n_numbers(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum_of_n_numbers(n-1);
}

int main() {
    static int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum: %d", sum_of_n_numbers(n));
    return 0;
}
