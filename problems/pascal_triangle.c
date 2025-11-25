#include <stdio.h>

// Function to calculate nCr
int nCr(int n, int r) {
    int res = 1;

    if (r > n - r)      // nCr = nC(n−r)
        r = n - r;

    for (int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // print leading spaces
        for (int space = 0; space < rows - i - 1; space++)
            printf(" ");

        // print values
        for (int j = 0; j <= i; j++)
            printf("%d ", nCr(i, j));

        printf("\n");
    }

    return 0;
}

