// DESC: You cannot return a pointer to a local variable.
//       Even though the code works and the compiler doesn't
//       flag it, it's bad practice
#include<stdio.h>

int *return_pointer();

int main() {
    int *c = return_pointer();
    printf("\ndummy print\n");
    int *x = return_pointer();
    printf("c: %u, *c: %d", c, *c);
    printf("\nx: %u, *x: %d", x, *x);
    return 0;
}

int *return_pointer() {
    int a = 12;
    int *b;
    b = &a;
    return b;
}
