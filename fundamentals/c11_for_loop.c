#include<stdio.h>

int main() {
    int x, min = 2147483647, max = -2147483648;
    for (int i = 0; i < 10; i++) {
        printf("\nEnter a number: ");
        scanf("%d", &x);
        if (max < x)
            max = x;
        if (min > x)
            min = x;
    }
    printf("\nMax: %d, Min: %d", max, min);
    return 0;
}

