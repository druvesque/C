#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;
    FILE *fptr;
    fptr = fopen("C:\\Users\\dhruv\\druvesque\\git_src\\c_practice\\fundamentals\\file_io\\file_example1.txt", "r");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    fscanf(fptr, "%d", &num);
    printf("Value of n = %d", num);
    fclose(fptr);
    return 0;
}
