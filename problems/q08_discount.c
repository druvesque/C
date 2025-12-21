#include<stdio.h>

int main() {
    float total_amount;
    float price;
    int quantity;
    printf("\nEnter Quantity: ");
    scanf("%d", &quantity);
    printf("\nEnter Price per item: ");
    scanf("%f", &price);

    total_amount = price * quantity;

    if (quantity > 1500)
        total_amount = (4*(total_amount))/5;

    printf("\nTotal Amount to be paid: %.2f", total_amount);
}
