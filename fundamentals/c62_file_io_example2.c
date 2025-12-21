#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2;
    FILE *fptr;
    fptr = fopen("C:\\Users\\dhruv\\druvesque\\git_src\\c_practice\\fundamentals\\f62_file_io_example2.txt", "r"); 

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Reading from the file!\n");
    fscanf(fptr, "%d", &num1);
    printf("Value of num1: %d\n", num1);
    fscanf(fptr, "%d", &num2);
    printf("Value of num2: %d\n", num2);
    fclose(fptr);
    return 0;
}
