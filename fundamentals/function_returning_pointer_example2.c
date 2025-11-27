#include<stdio.h>

unsigned long int (*avg())[3] {
    static unsigned long int arr[3] = {1, 2, 3};
    return &arr;
}

int main() {
    int i;
    unsigned long int (*ptr)[3];
    ptr = avg();
    for (i = 0; i < 3; i++) {
        printf("%d\t", (*ptr)[i]);
    }
}
