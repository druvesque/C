#include<stdio.h>
void main() {
    int i = 10;
    int *j = &i;
    printf("i: %d", i);
    printf("\nj = %u", j);
    i++;
    (*j)++;
    printf("\ni: %d", i);
    printf("\nj: %u", i);
    i++;
    j++;
    printf("\nj: %u", j);
    i++;
    j++;
    printf("\ni: %d", i);
    printf("\nj: %u", j);
}
