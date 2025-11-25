#include<stdio.h>
void main() {
    system("cls");
    printf("***********************\n");
    printf("WELCOME TO KAT'S CAFE!!!\n");
    printf("***********************\n");
    printf("----------MENU----------\n\n");
    printf("1. 5-Cheese Pizza            12$\n");
    printf("2. Smoked Barbeque Pasta     10$\n");
    printf("3. Chicken Kebab              7$\n");
    printf("4. Banarsi Patiala            5$\n");
    printf("5. Irish Coffee               5$\n");

    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        int dish;
        printf("\n\nWhat would you like to order (1/2/3/4/5): ");
        scanf("%d", &dish);
        switch (dish) {
            case 1:
                printf("Here's your 5-Cheese Pizza\n");
                printf("That would be 12$!\n");
                break;
                    
            case 2:
                printf("Here's your Smoked Barbeque Pasta\n");
                printf("That would be 10$! \n");
                break;
            
            case 3: 
                printf("Here's your Chicken Kebab\n");
                printf("That would be 7$!\n");
                break;
                
            case 4:
                printf("Here's your Banarsi Patiala\n");
                printf("That would be 5$!\n");
                break;

            case 5:
                printf("Here's your Irish Coffee\n");
                printf("That would be 5$!\n");
                break;
               
            default:
                printf("I see you're still making up your mind! Take your time!\n");
        }

        printf("\nDo you wish to order more? (y/Y): ");
        scanf(" %c", &choice);

    }

    printf("\nBb-Bye, Thank you for coming to Kat's Cafe!");
}
