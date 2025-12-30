// DESC: C Program to understand functions in C

#include<stdio.h>

int power(int, int);              // FUNCTION DECLARATION

void main() {
    int m = power(3, 5);
    printf("\nResult: %d", m);
    m = power(4, 5);              // FUNCTION CALL
    printf("\nResult: %d", m);
}

int power(int x, int y) {         // FUNCTION DEFINITION
    int result = 1;
    while (y > 1) {
        result = result * x;
        y--;
    }
    return result;
}

