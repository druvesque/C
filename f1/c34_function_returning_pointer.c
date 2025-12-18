// NOTE: This code SHOULD NOT work as it's returning the address of a local variable which is destroyed as soon as the function is complete.
#include<stdio.h>

int *add(int, int);

int main() {
    int a = 4, b = 6;
    int *z;
    z = add(a, b);
    printf("%d", *z);
    return 0;
}

int *add(int x, int y) {
    int c = x + y;
    return &c;
}
