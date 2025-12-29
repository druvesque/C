#include<stdio.h>

int main() {
    float distance;
    float fuel_spent;
    printf("Enter Total Distance travelled by bike (in kms): ");
    scanf("%f", &distance);
    printf("Enter Fuel Spent (in litres): ");
    scanf("%f", &fuel_spent);
    float consumption = distance / fuel_spent;
    printf("Average consumption: %.2f (km/lt)", consumption);
    return 0;
}
