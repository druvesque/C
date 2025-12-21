#include<stdio.h>
#include<math.h>

void square_root(float, float, float);

int main() { 
    float a, b, c;
    a = 1, b = -5, c = 6;
    square_root(a, b, c);
    a = 1, b = -2, c = 1;
    square_root(a, b, c);
    a = 2, b = 3, c = 4;
    square_root(a, b, c);
    return 0;
}

void square_root(float a, float b, float c) {
    float D, r1, r2;

    if (a == 0) {
        printf("\nNot a Quadratic Expression");
        return;
    }
    
    D = b*b - 4*a*c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("\nRoots are real and different.");
        printf("\nRoots: %.2f, %.2f", r1, r2);
    }
    else if (D == 0) {
        r1 = r2 = -b / (2*a);
        printf("\nRoots are real and same.");
        printf("\nRoot: %.2f", r1);
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-D) / (2*a);
        printf("\nRoots are imaginary and complex.");
        printf("\nRoot1: %.2f + %.2fi", real, imag);
        printf("\nRoot2: %.2f - %.2fi", real, imag);
    } 
}
