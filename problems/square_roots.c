#include<stdio.h>
#include<math.h>
void main() {
    float a, b, c;
    printf("Enter a, b, c for the equation {a.x^2 + b.x + c}: ");
    scanf("%f %f %f", &a, &b, &c);
    float D = sqrtf((b*b) - 4*a*c);
    printf("Roots are: %f %f", ((-b + D)/(2*a)), ((-b - D)/(2*a)));
}
