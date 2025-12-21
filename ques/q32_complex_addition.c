#include<stdio.h>

struct Complex {
    float real;
    float imag;
};

void add(struct Complex, struct Complex);

int main() {
    struct Complex c1 = {3.6, 23.4};
    struct Complex c2 = {6.1, 1.6};
    add(c1, c2);
    return 0;
}

void add(struct Complex a, struct Complex b) {
    float real_add, imag_add;
    real_add = a.real + b.real;
    imag_add = a.imag + b.imag;
    printf("Addition: %.2f + i%.2f", real_add, imag_add);
}
