#include<stdio.h>

int main() {
    int x = 5, y; 
    printf("x = %d", x);
    printf(", y = x++ + x++, y: %d\n", x++ + x++);

    x = 5;
    printf("x = %d", x);
    printf(", y = ++x + ++x, y: %d\n", ++x + ++x);

    x = 5;
    printf("x = %d", x);
    printf(", y = ++x + x++, y: %d\n", ++x + x++);

    x = 5;
    printf("x = %d", x);
    printf(", y = x++ + ++x, y: %d\n", x++ + ++x);

    x = 5;
    printf("x = %d", x);
    printf(", y = x++ + x++ + x++, y: %d\n", x++ + x++ + x++);

    x = 5;
    printf("x = %d", x);
    printf(", y = ++x + ++x + ++x, y: %d\n", ++x + ++x + ++x);     
    return 0;
}
