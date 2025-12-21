#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, sum = 0, *ptr, *p, *q;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    p = ptr;
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", (p+i));
        sum += *(p+i);
    }
    printf("\n\nArray:\t");
    for (int i = 0; i < n; i++) 
        printf("%d\t", *(p+i));
    printf("\nSum of the elements in the array: %d", sum);

    printf("\n\nEnter new size of the array: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    q = ptr;
    sum = 0;
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", (q+i));
        sum += *(q+i);
    }
    printf("\n\nArray:\t");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(q+i));
    printf("\nSum of the elements in the array: %d", sum);
    
    free(ptr);
    return 0;
}
