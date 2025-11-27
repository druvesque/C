#include<stdio.h>

int linear_search(int *p, int size);

void main() {
    int arr[5];
    int i, pos = -1;
    for (i = 0; i < 5; i++) {
        printf("\nEnter a number: ");
        scanf("%d", &arr[i]);
    }
    pos = linear_search(&arr[0], 5);
    if (pos == -1)
        printf("\nElement Not found\n");
    else
        printf("\nElement Found at position: %d", pos);
}

int linear_search(int *p, int size) {
    int element, pos = -1, i;
    printf("\nEnter the element: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++) {
        if (*p == element) {
            pos = i;
            p++;
            break;
        }
    }
    return pos;
}
