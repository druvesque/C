// FUNC: swap
//
// This function swaps the values of the two variables. 
// The reference of the two variables is provided as 
// the input.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// FUNC: display_array
//
// This function prints an array.
// Inputs: pointer to the first element of the array
//         size of the array
void print_array(int arr[], int size) {
    printf("Current Array:\t");
    for (int i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}
