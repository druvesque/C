#include<stdio.h>
int main() {
    struct emp {
        char name[10];
        char company[20];
        int id;
    };
    struct emp e1[2];
    int i;
    printf("Enter name, comapny: \n");
    for (i = 0; i < 2; i++) {
        scanf("%s %s", e1[i].name, e1[i].company);
    }
    for (i = 0; i < 2; i++) {
        printf("\n%s %s\n", e1[i].name, e1[i].company);
    }
    return 0;
}
