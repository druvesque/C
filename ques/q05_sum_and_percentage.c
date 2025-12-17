#include<stdio.h>

int main() {
    int m1 = 54, m2 = 46, m3 = 65, m4 = 87, m5 = 98;
    float sum = m1 + m2 + m3 + m4 + m5;
    float percentage = (sum/500.00) * 100;
    printf("Sum: %.2f/500.00", sum);
    printf("\nPercentage: %.2f%%", percentage);
    return 0;
}
