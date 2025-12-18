#include<stdio.h>

int mul(int, int);

int main() {
    int a = 5, b = 6, product;
    int (*ptr)(int, int) = mul;
    product = ptr(a, b);
    printf("\n%d", product);
    return 0;
}

int mul(int x, int y) {
    int z = x*y;
    return z;
}
