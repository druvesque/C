#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p1 = &arr[0];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += *(p1 + i);
    }
    printf("\nSum: %d", sum);
    return 0;
}
