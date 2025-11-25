#include<stdio.h>

void main() {
    int i, avg, sum = 0;
    int sal[10];
    for (i = 0; i < 10; i++) {
        printf("Enter Value: ");
        scanf("%d", &sal[i]);
        sum = sum + sal[i];
    }
    avg = sum / 10;
    for (i = 0; i < 10; i++) {
        printf("Salary at position %d is %d", i+1, sal[i]);
    }
    printf("\nAverage Salary: %d", avg);
}
