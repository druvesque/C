#include<stdio.h>

void main() {
    int x;
    int sum(int, int);
    printf("Sum of two numbers: %d", sum(8, 6));
}

int sum(int x, int y) {
    int z;
    z = x + y;
    return z;
}
