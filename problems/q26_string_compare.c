#include<stdio.h>

int string_compare(char[], char[]);

int main() {
    char str1[100], str2[100];
    printf("\nEnter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("\nEnter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    printf("\nPost Comparison: %d", string_compare(str1, str2));
    return 0;
}

int string_compare(char str1[], char str2[]) {
    char *p1 = str1;
    char *p2 = str2;
    int i = 0;
    while (*(p1+i) != '\0' || *(p2+i) != '\0') {
        if (*(p1+i) > *(p2+i))
            return 1;
        else if (*(p1+i) < *(p2+i))
            return -1;
        i++;
    }
    return 0;
}
