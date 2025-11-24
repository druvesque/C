#include<stdio.h>
void main() {
    int quantity;
    float discount = 0;
    float price_per_item;
    printf("Enter Quantity and Price Per Item: ");
    scanf("%d %f", &quantity, &price_per_item);
    if (quantity > 1500) {
        printf("\nIDHAR AAGYA");
        discount = 0.2;
    }
    float result = quantity * price_per_item;
    printf("\nDISCOUNT: %f\n", discount);
    float after_discount = result * (1 - discount);
    printf("Total Expense: %f", after_discount);
}
