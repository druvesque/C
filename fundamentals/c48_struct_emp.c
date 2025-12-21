#include<stdio.h>

int main() {

    struct emp {
        char name;
        int id;
    };

    struct emp e1;
    struct emp e2 = {'v', 19}; // another way of declaring a structure
    struct emp s[100];

    printf("\nEnter Name: ");
    scanf("%c", &e1.name);
    printf("\nEnter ID: ");
    scanf("%d", &e1.id);

    printf("\nEntered Data E1:  ");
    printf("\nName: %c", e1.name);
    printf("\nID: %d", e1.id);
    printf("\nEntered Data E2:  ");
    printf("\nName: %c", e2.name);
    printf("\nID: %d", e2.id); 
    printf("\nSize of Array of Structure: %d", sizeof(s));
    return 0;
}
