#include<stdio.h>

int main() {
    int a = 4;
    int *p1 = &a;
    int **p2 = &p1;
    printf("\nActual value of p1: %u, Value of p1 from p2: %u", p1, *p2);
    printf("\nValue of p2: %u", p2);
    printf("\nAddress of p2: %u", &p2);
    printf("\nValue of a from p2: %d", *(*p2));
    return 0;
}
