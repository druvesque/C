#include<stdio.h>

void main() {
    int i = 45, j = 56, k = 78, l = 67, m;
    int *arr[4];
    arr[0] = &i; arr[1] = &j; arr[2] = &k; arr[3] = &l;
    for(m = 0; m <= 3; m++) {
        printf("%d ", *(arr[m]));
    }
}
