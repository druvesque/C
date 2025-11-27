#include<stdio.h>
void main() {
    char p = 'a';
    char *m = &p;
    printf("Address of p: %u\n", m);
    printf("Value of p: %c\n", *m);
    printf("Value of p: %c", p);
}
