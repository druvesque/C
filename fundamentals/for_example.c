#include<stdio.h>
void main() {
    int counter, x, max = -32768, min = 32767;
    for (counter = 1; counter <= 10; counter++) {
        printf("\nEnter a number: ");
        scanf("%d", &x);
        if (max < x)
            max = x;
        if (min > x)
            min = x;
    }
    printf("\nMax: %d, Min: %d", max, min);
}
