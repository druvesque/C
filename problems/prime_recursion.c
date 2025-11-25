#include<stdio.h>

int prime(int x, int y) {
    if (y == 1)
        return 1;
    else if (x % y == 0)
        return 0;
    else {
        y--;
        prime(x, y);
    }
}

int main() {
    static int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = n/2;
    int is_prime = prime(n, i);
    if (is_prime)
        printf("Prime");
    else
        printf("Composite");
    return 0;
}
