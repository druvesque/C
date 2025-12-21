#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char name[100], *description;
    strcpy(name, "Issac Netero");
    description = (char*)malloc(30*sizeof(char));
    if (description == NULL)
        printf("\nUnable to allocate memory.");
    else
        strcpy(description, "He's very strong!");
    // Reallocation
    description = (char*)realloc(description, 100*sizeof(char));
    if (description == NULL)
        printf("\nUnable to allocate the required memory.");
    else
        strcat(description, " He's the chairman.");
    printf("\nName: %s", name);
    printf("\nDescription: %s", description);
    free(description);
    return 0;
}
