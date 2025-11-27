#include<stdio.h>
void main() {
    int arr[] = {12, 56, 34, 89, 57};
    int counter, *p_array;
    int sum = 0;
    p_array = &arr[0];
    for(counter = 0; counter < 5; counter++) {
        sum += *p_array;
        printf("\nArray Element at %d position %d", (counter + 1), *p_array);
        p_array++;
    }
    printf("\nSum: %d", sum);
}
