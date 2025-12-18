#include<stdio.h>
#define FUN(i, j) i##j

int main() {
    int va12 = 20;
    printf("\nva12: %d", FUN(va1,2));
    return 0;
}
