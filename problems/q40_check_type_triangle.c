#include<stdio.h>

int main() {
    float a, b, c;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        printf("Invalid Side(s)");
        return 0;
    }
    if ((c > a+b) || (b > a+c) || (a > b+c)) {
        printf("Doesn't form a triangle");
        return 0;
    }
    if ((a == b) && (b == c))
        printf("Equilateral Triangle");
    else if ((a==b) || (b==c) || (a==c))
        printf("Isoceles Triangle");
    else
        printf("Scalene Triangle");
    return 0;
}
