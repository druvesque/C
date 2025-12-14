#include<stdio.h>

int main() {
    int i = 1; 
    {
        int i = 2;
        printf("\n%d", i);
    }
    printf("\n%d", i);
    return 0;
}
