#include<stdio.h>

int main() {
    int count = 0, sum = 0;
    int x, choice;
    float avg = 0;

    do {
        printf("\nEnter a number: ");
        scanf("%d", &x);
        count++;
        sum = sum + x;
        printf("\nDo you wish to enter more numbers? (press 1 otherwise 0): ");
        scanf("%d", &choice);
    } while (choice == 1);

    avg = sum / count;
    printf("\nSum: %d, Average: %.2f", sum, avg);
    return 0;
}
