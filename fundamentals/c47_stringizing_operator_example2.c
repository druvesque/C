#include<stdio.h>
#define makechar(x) #x

int main() {
    char *a;
    a = makechar(Mr.Bean);
    printf("\na: %s", a);
    return 0;
}
