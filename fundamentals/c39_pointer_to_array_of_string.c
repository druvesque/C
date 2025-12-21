#include<stdio.h>

int main() {
    char *arr[4] = {"C", "C++", "Java", "Python"};
    char *(*ptr)[4] = &arr;
    for (int i = 0; i < 4; i++) {
        printf("\nAddress of string %d: %u", i+1, (*ptr)[i]);
        printf("\nString %d: %s", i+1, (*ptr)[i]);
    }
    return 0;
}
