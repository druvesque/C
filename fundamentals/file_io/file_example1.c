#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;
    FILE *fptr;
    fptr = fopen("C:\\Users\\dhruv\\druvesque\\git_src\\c_practice\\fundamentals\\file_io\\file_example1.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter num: ");
    scanf("%d", &num);
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}
