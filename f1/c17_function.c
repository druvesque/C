#include<stdio.h>

int power(int, int);

void main() {
    int m = power(3, 5);
    printf("\nResult: %d", m);
    m = power(4, 5);
    printf("\nResult: %d", m);
}

int power(int x, int y) {
    int result = 1;
    while (y > 1) {
        result = result * x;
        y--;
    }
    return result;
}

