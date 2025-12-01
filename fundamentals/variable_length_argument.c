#include<stdio.h>
#include<stdarg.h>

double average(int num, ...) {
    va_list valist;
    // printf("DEBUG BEFORE VA_START\n");
    // for (int i = 0; i < num; i++) {
    //     printf("\nvalist[%d]: %d\n", i, va_arg(valist, int));
    // }
    double sum = 0.0;
    va_start(valist, num);
    // printf("DEBUG AFTER VA_START\n");
    // for (int i = 0; i < num; i++) {
    //     printf("\nvalist[%d]: %d\n", i, va_arg(valist, int));
    // }
    int i;
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }
    va_end(valist);
    return sum/num;
}

int main() {
    printf("Average of 2, 8, 4, 6 = %f\n", average(4, 2, 8, 4, 6));
    printf("Average of 5, 11, 12 = %f\n", average(3, 5, 11, 12));
    return 0;
}
