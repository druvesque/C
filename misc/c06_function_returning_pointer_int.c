// DESC: Returning a pointer to an integer from a function call
#include<stdio.h>

int *return_pointer_int(int);

int main() {
    int a = 15;
    int *c = return_pointer_int(a);
    printf("c: %u, *c: %d", c, *c);
    return 0;
}

int *return_pointer_int(int n) {
    int *b = &n;
    return b;
}
