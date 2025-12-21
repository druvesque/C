#include<stdio.h>

void even_odd_bitwise(int num);

int main() {
    int num;
    num = 2;
    even_odd_bitwise(num);
    num = -5;
    even_odd_bitwise(num);
    num = 0;
    even_odd_bitwise(num);
    num = -6.3;
    even_odd_bitwise(num);
    return 0;
}

void even_odd_bitwise(int num) {
    if (num & 1 != 0)
        printf("\nOdd");
    else
        printf("\nEven");
}
