#include<stdio.h>
#include<math.h>
void main() {
    float a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float s = a + b + c;
    printf("Area of the triangle: %f", sqrtf(s * (s - a) * (s - b) * (s - c)));
}
