#include<stdio.h>
void main() {
    char p = 'a';
    printf("Address of p: %u\n", &p);
    printf("Value of p: %c\n", *(&p));
    printf("Value of p: %c\n", p);
}
