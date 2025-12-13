#include<stdio.h>

int main() {
    int option = 1, total_amount = 0, choice;
    printf("-----WELCOME TO THE CURIE'S CAFE-----");
    while (option) {

        printf("\n1. PIZZA                ---10$");
        printf("\n2. PASTA                --- 8$");
        printf("\n3. VODKA COLD COFFEE    --- 7$");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                total_amount = total_amount + 10;
                break;
            case 2:
                total_amount = total_amount + 8;
                break;
            case 3:
                total_amount = total_amount + 7;
                break;
            default:
                printf("\nInvalid Choice!");
        }

        printf("\nDo you want to order more? (Press 1 otherwise 0): ");
        scanf("%d", &option);
    }
    printf("\n\nHere's your order, that would be: %d$", total_amount);
    return 0;
}
