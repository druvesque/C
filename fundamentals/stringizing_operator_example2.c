#include<stdio.h>
#define makechar(x) #x
void main() {
    char *a;
    a = makechar(Mr.Bean);
    printf("%s", a);
}
