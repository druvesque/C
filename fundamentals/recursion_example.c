#include<stdio.h>
void main() {
    static int i = 1;
    printf("%d ", i);
    i++;
    if (i <= 5)
        main();
}
