#include<stdio.h>

int main() {
    char p = 'a';
    char *m = &p;
    // Without using pointers
    printf("\nAddress of p: %u", &p);
    printf("\nValue of p: %c", *(&p));
    printf("\nValue of p: %c", p);
    // With using pointers
    printf("\nAddress of p: %u", m);
    printf("\nValue of p: %c", *m);
    printf("\nValue of p: %c", p);
    // Size
    printf("\nSizeof p: %d", sizeof(p));
    printf("\nSizeof m: %d", sizeof(m));
    return 0;
}
