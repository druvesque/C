#include<stdio.h>
#include<string.h>

int string_length(char[]);

int main() {
    char str[100];
    printf("Enter data: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\nLength: %d", string_length(str));
    return 0;
}

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}
