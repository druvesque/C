#include<stdio.h>

void string_copy(char[], char[]);

int main() {
    char str1[20] = "Hello World!";
    char str2[20];
    string_copy(str1, str2);
    printf("\nAfter copying: %s", str2);
    return 0;
}

void string_copy(char str1[], char str2[]) {
    char *p1 = str1;
    char *p2 = str2;
    int i = 0;
    while (*(p1+i) != '\0') {
        *(p2+i) = *(p1+i);
        i++;
    }
}

