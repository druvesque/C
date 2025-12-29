#include<stdio.h>

int main() {
    float a, b, c;
    printf("Enter side 1: ");
    scanf("%f", &a);
    printf("Enter side 2: ");
    scanf("%f", &b);
    printf("Enter side 3: ");
    scanf("%f", &c);

    if ((a > b + c) || (b > a + c) || (c > a + b)) {
        printf("It's not possible to form a triangle with these sides");
        return 0;
    }
    float perimeter = a + b + c;
    printf("\nPerimeter: %.2f", perimeter);
    return 0;
}
