#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;
    FILE *fptr;
    fptr = fopen("C:\\Users\\dhruv\\druvesque\\git_src\\c_practice\\fundamentals\\f61_file_io_example1.txt", "a");

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("\nEnter the number: ");
    scanf("%d", &num);
    fprintf(fptr, "The number stored in the file: %d\n", num);
    fclose(fptr);
    return 0;
}
