#include<stdio.h>

int main() {
    char *name[3] = {"India", "Australia", "South Africa"};
    for (int i = 0; i < 3; i++)
        printf("\nCountry: %s", name[i]);
    return 0;
}
