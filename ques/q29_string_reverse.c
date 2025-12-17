#include<stdio.h>
#include<string.h>

void string_reverse(char[], int);
void swap(char*, char*);

int main() {
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    string_reverse(str, strlen(str));
    printf("\nReversed String: %s", str);
    return 0;
}

void string_reverse(char str[], int size) {
    for (int i = 0; i < size/2; i++) {
        char *p1 = &str[i];
        char *p2 = &str[size-i-1];
        swap(p1, p2);
    }
}

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
