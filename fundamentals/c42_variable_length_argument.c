// DESC: C Program to understand the concept of passing
//       different number of arguments to the function

#include<stdio.h>
#include<stdarg.h>

double average(int num, ...) {
    va_list valist;
    double sum = 0.0;
    va_start(valist, num);
    for (int i = 0; i < num; i++)
        sum += va_arg(valist, int);
    va_end(valist);
    return sum/num;
}

int main() {
    printf("\nAverage of 2, 3, 4, 5: %.2f", average(4, 2, 3, 4, 5));
    printf("\nAverage of 5, 10, 15: %.2f", average(3, 5, 10, 15));
    return 0;
}
