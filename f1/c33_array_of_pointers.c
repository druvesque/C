#include<stdio.h>

int main() {
    // Example - 1
    int i = 45, j = 56, k = 78, l = 67;
    int *arr[4];
    arr[0] = &i; arr[1] = &j; arr[2] = &k; arr[3] = &l;
    for (int i = 0; i < 4; i++)
        printf("\nAddress: %u, Value: %d", arr[i], *(arr[i]));
    // Example - 2
    int a[] = {0, 1, 2, 3, 4};
    int *p[] = {a, a+1, a+2, a+3, a+4};
    printf("\n%u %u %d", p+1, *(p+1), *(*(p+1)));
    return 0;
}
