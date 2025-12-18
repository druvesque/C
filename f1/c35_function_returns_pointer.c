// NOTE: *(ptr + i) does not work here
#include<stdio.h>

unsigned long int (*avg())[3];

int main() {
    unsigned long int (*ptr)[3];
    ptr = avg();
    for (int i = 0; i < 3; i++)
        printf("%d\t", (*ptr)[i]);
    return 0;
}

unsigned long int (*avg())[3] {
    static unsigned long int arr[3] = {1, 2, 3};
    return &arr;
}
