#include<stdio.h>
int mul(int x, int y) {
    int z = x * y;
    return z;
}

int main() {
    int a = 5, b = 6, product;
    int (*ptr)(int, int) = &mul;
    product = ptr(a, b);
    printf("Product: %d", product);
    printf("\n%u", ptr);
}
