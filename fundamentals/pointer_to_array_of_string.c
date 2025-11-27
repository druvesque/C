#include<stdio.h>

int main() {
    int i;
    char *arr[4] = {"C", "C++", "Java", "VBA"};
    char *(*ptr)[4] = &arr;
    for (i = 0; i < 4; i++) {
        printf("Address of String %d: %u\n", i+1, (*ptr)[i]);
        printf("String %d: %s\n", i+1, (*ptr)[i]);
    }
    return 0;
}
