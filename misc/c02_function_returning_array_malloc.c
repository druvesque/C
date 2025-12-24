#include<stdio.h>
#include<stdlib.h>

int *make_array(int);

int main() {
    int *arr_main;
    int size = 6;
    arr_main = make_array(size);
    if (arr_main == NULL)
        return 1;
    printf("\nArray:");
    for (int i = 0; i < size; i++)
        printf("\t%d", *(arr_main + i));
    free(arr_main);
    return 0;
}

int *make_array(int n) {
    int *arr = malloc(n*sizeof(*arr));
    if (arr == NULL)
        return NULL;
    for (int i = 0; i < n; i++)
        arr[i] = i * 10;
    return arr;
}
