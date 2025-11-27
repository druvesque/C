#include <stdio.h>

int main() {
    char line[100], word[50];

    printf("Enter your name: \n");
    scanf("%s", word);
    getchar();  // flush newline

    puts("Describe Yourself");
    fgets(line, sizeof(line), stdin);

    printf("\nYou Entered\n%s\n", word);
    puts(line);

    return 0;
}

