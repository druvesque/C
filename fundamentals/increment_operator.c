#include<stdio.h>
int main() {
    int x = 5;
    int y = 8;
    int a;
    a = ++x + ++y;
    printf("\nValue of x: %d, y: %d, a: %d\n", x, y, a);
    a = x++;
    a = ++x;
    a = x--;
    a = --x;
    a = x++ + x++;
    printf("\nValue of x: %d, a: %d\n", x, a);
    a = (y++, y*2);
    a = (y *= 4, y++, y*2);
    printf("y: %d, a = %d", y, a);
    return 0;
}
