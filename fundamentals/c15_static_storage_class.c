#include<stdio.h>

void dec(); 

int main() {
    dec();
    dec();
    return 0;
}

void dec() {
    static int i = 4;
    printf("%d\t", i);
    i--;
}
