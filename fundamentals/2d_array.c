#include<stdio.h>
void main() {
    int i, j;
    int arr1[2][3], arr2[2][3], arr3[2][3];
    printf("Enter array element of 1st array: ");
    for (i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter array element of 2nd array: ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nOutput: ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", arr3[i][j]);
        }
    }
}
