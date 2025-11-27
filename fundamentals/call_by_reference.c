#include<stdio.h>
void alter(int *);
void main() {
    int m = 5;
    printf("\nBefore function call, m: %d", m);
    alter(&m);
    printf("\nAfter function call, m: %d", m);
}
void alter(int *r) {
    *r = *r * 2;
    printf("\nIn function call, m: %d", *r);
}
