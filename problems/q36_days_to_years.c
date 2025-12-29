#include<stdio.h>

int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    int years = days / 365;
    int weeks = (days % 365) / 7;
    days = ((days % 365) % 7);
    printf("\nYears: %d", years);
    printf("\nWeeks: %d", weeks);
    printf("\nDays: %d", days);
    return 0;
}
