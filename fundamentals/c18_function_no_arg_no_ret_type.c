// DESC: C Program to understand a function
//       with no argument and no return type

#include<stdio.h>

void main() {
    void sum();
    printf("Sum of two numbers: ");
    sum();
}

void sum() {
    int x = 5, y = 6, z;
    z = x + y;
    printf("%d", z);
}
