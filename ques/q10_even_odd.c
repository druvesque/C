#include<stdio.h>

void even_odd(int);

int main() {
    int num;
    num = 2;
    even_odd(num);
    num = -5;
    even_odd(num);
    num = 0;
    even_odd(num);
    num = -6.3;
    even_odd(num);
    return 0;
}

void even_odd(int num) {
    if (num % 2 != 0)
        printf("\nOdd");
    else
        printf("\nEven");
}
