#include<stdio.h>

int main() {
    int b = 8;
    int A = (b++, b*2);
    printf("b: %d, A: %d", b, A);
    return 0;
}
