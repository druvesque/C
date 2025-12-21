#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; i < strlen(str); i++)
        printf("%d ", str[i]);
    return 0;
}
