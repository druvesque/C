#include<stdio.h>
void main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", count);
            count++;
        } 
        printf("\n");
    }
}
