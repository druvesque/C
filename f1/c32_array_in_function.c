#include<stdio.h>

int linear_search(int*, int); 

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int pos = -1;
    pos = linear_search(&arr[0], 5);
    if (pos == -1)
        printf("\nElement Not Found!");
    else
        printf("\nElement found at index: %d", pos);
    return 0;
}

int linear_search(int *p, int size) {
    int element, pos = -1;
    printf("\nEnter the element: ");
    scanf("%d", &element);
    for (int i = 0; i < size; i++) {
        if (*(p+i) == element) {
            pos = i;
            p++;
            break;
        }
    }
    return pos;
}
