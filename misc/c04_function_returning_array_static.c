#include<stdio.h>

int *make_array();

int main() {
    int *arr = make_array();
    printf("\nArray:");
    for (int i = 0; i < 10; i++)
        printf("\t%d", *(arr+i));
    return 0;
}

int *make_array() {
    static int arr[10];
    for (int i = 0; i < 10; i++) 
        arr[i] = i * 10;
    return arr;
}
