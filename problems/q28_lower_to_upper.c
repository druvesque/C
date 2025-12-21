#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("\nEnter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i++;
    }
    printf("\nPost conversion: %s", str);
    return 0;
}
