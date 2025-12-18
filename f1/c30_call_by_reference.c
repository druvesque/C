#include<stdio.h>

void alter(int*);

int main() {
    int m = 5;
    printf("\nBefore function: %d", m);
    alter(&m);
    printf("\nAfter function: %d", m);
    return 0;
}

void alter(int *r) {
    *r = *r * 2;
    printf("\nDuring function: %d", *r);
}

