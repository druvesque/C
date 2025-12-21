#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, sum = 0, *ptr, *p;
    printf("\nEnter size: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    p = ptr;
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", (ptr+i));
        sum += *(ptr + i);
    }
    printf("\nArray:\t");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(ptr+i));
    printf("\n\nSum of the elements of the array: %d", sum);
    free(ptr);
    return 0;
}
