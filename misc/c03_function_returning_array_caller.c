#include<stdio.h>

void make_array(int*, int);

int main() {
    int arr[10];
    make_array(arr, 10);
    printf("\nArray:");
    for (int i = 0; i < 10; i++)
        printf("\t%d", arr[i]);
    return 0;
}

void make_array(int *arr, int size) {
    for (int i = 0; i < size; i++)
        *(arr + i) = i * 10;
}
