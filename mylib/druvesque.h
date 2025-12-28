// FUNC: swap
//
//
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// FUNC: display_array
//
//
void print_array(int arr[], int size) {
    printf("Current Array:\t");
    for (int i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}
