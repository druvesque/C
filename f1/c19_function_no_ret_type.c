#include<stdio.h>

void main() {
    void sum(int, int);
    printf("Sum of two numbers: ");
    sum(5, 6);
}

void sum(int x, int y) {
    int z;
    z = x + y;
    printf("%d", z);
}
