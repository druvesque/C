#include<stdio.h>
#include<stdlib.h>

void main() {
    int i, n, *ptr, sum = 0, *p, *q;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    p = ptr;
    printf("\nEnter the elements one by one in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr+i));
        sum += *(ptr + i);
    }
    printf("\nArray elements: \n");
    for (i = 0; i < n; i++) {
        printf("%d", *(p+i));
    }
    printf("\nsum = %d", sum);
   

    printf("Enter the new size of the array: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    q = ptr;
    sum = 0;
    printf("Enter the elements one by one in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
        sum = sum + *(ptr + i);
    }
    printf("array elements: \n");
    for (i = 0; i < n; i++) {
        printf("%d", *(q + i));
    }
    printf("\nsum: %d", sum);
    free(ptr);

}
