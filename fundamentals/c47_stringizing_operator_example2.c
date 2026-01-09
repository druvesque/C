// DESC: Example-2 of stringizing operator in C

#include<stdio.h>
#define makechar(x) #x

int main() {
    char *a;
    a = makechar(Mr.Bean);
    printf("\na: %s", a);
    return 0;
}
