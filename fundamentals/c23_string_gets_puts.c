// DESC: C Program to understand strings using 
//       gets and puts

#include<stdio.h>

int main() {
    char line[100], word[50];
    printf("\nEnter name: ");
    gets(word);
    printf("\nEnter description: ");
    gets(line);
    printf("\nYou entered: ");
    puts(word);
    puts(line);
    return 0;
}
