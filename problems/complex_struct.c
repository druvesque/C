#include<stdio.h>

struct Complex {
    float real;
    float imag;
};

void add_complex(struct Complex *a, struct Complex *b) {
    float r_add, i_add;
    r_add = a->real + b->real;
    i_add = a->imag + b->imag;
    printf("Sum: %f + i.%f", r_add, i_add);
}

void main() {
    struct Complex c1 = {2.2, 7.9};
    struct Complex c2 = {9.8, 3.1};
    add_complex(&c1, &c2);
}
