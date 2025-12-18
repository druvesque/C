#include<stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 2)
        printf("\nThe argument supplied is %s", argv[1]);
    else if (argc > 2)
        printf("\nToo many arguments supplied.");
    else {
        printf("\nNumber of arguments: %d", argc);
        printf("\nArgument: %s", argv[0]);
        printf("\n1 Argument expected.");
    }
    return 0;
}
