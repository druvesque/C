#include<stdio.h>
int *add(int x, int y) {
    static int c;
    c = x + y;
    return &c;
}
void main() {
    int a = 4, b = 6;
    int *z;
    z = add(a, b);
    printf("%d", *z);
}
