#include<stdio.h>
#define paster(n) printf("\ntoken"#n" = %d", token##n);
int token8 = 878;
int token9 = 932;

int main() {
    paster(9);
    paster(8);
    return 0;
}
