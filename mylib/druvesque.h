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

// FUNC: bubble_sort
//
// Function to sort an array using bubble sort algorithm
// Inputs: pointer to the first element of the array
//         size of the array

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

// FUNC: selection_sort
//
//
//

void selection_sort(int arr[], int size) {

}
