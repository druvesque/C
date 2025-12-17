#include<stdio.h>
#include<math.h>

void herons_formula(float, float, float);

int main() {
    float a, b, c;
    a = 3, b = 4, c = 5;
    herons_formula(a, b, c);
    a = 10, b = 11, c = 12;
    herons_formula(a, b, c);
    return 0;
}

void herons_formula(float a, float b, float c) {
    float s = (a + b + c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of the triangle: %.2f", area);
}
