#include<stdio.h>

void main() {
    char str1[100];
    char str2[100];
    puts("Enter str1: ");
    gets(str1);
    puts("\n");
    puts("Enter str2: ");
    gets(str2);
    int i = 0, cmp = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            cmp = 1;
            break;
        }
        else if(str1[i] < str2[i]) {
            cmp = -1;
            break;
        }
        i++;
    }
    printf("Post Comparison: %d", cmp);
}
