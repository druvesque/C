#include<stdio.h>

int main() {
    int i = 10;
    int *j = &i;
    printf("\ni: %d", i);
    printf("\nj: %u", j);
    i++;
    (*j)++;
    printf("\ni: %d", i);
    printf("\nj: %u", j);
    i++;
    j++;
    printf("\ni: %d", i);
    printf("\nj: %u", j);
    i++;
    j++;
    printf("\ni: %d", i);
    printf("\nj: %u", j);
    return 0;
}
