#include<stdio.h>
#include<string.h>

void string_concatenation(char[], char[]);

int main() {
    char str1[100], str2[100];
    printf("\nEnter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("\nEnter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    string_concatenation(str1, str2);
    printf("\nAfter concatenation: %s", str1);
    return 0;
}

void string_concatenation(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
