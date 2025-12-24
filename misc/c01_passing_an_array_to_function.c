#include<stdio.h>

void print_array(int*, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, size);
    return 0;
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) 
        printf("\nIndex: %d, Value: %d", i, *(arr+i));
}
