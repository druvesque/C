#include<stdio.h>
void main() {
    int counter = 0, x, ans, sum = 0, average = 0;
    do {
        printf("\nEnter a Number: ");
        scanf("%d", &x);
        sum = sum + x;
        counter++;
        printf("\nDo you wish to enter more number (0 to quit / 1 to continue: ");
        scanf("%d", &ans);
    } while (ans == 1);
    average = sum / counter;
    printf("Sum: %d, Average: %d", sum, average);
}
