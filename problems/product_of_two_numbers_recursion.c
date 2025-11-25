#include<stdio.h>

int product(int x, int y) {
    if (y == 0)
        return 0;
    else 
        return x + product(x, y - 1);
}

int main() {
    static int a, b;
    printf("Enter 2 Numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Product: %d", product(a, b));
    return 0;
}
