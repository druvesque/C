#include<stdio.h>
#define paster(n1, n2) printf("Value: %d, %d", token##n1, val##n2)
int token9 = 9;
int val8 = 8;

int main() {
    paster(9, 8);
    return 0;
}


