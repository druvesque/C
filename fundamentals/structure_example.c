#include<stdio.h>

int main() {
    struct emp {
        char name;
        int id;
    };

    struct emp e1, e2;

    printf("Enter name and id of the employees\n");
    scanf("%c %d", &e1.name, &e1.id);
    scanf("\n%c %d", &e2.name, &e2.id);
    printf("\n Entered entities are: ");
    printf("\n%c %d", e1.name, e1.id);
    printf("\n%c %d", e2.name, e2.id);

    return 0;
}
