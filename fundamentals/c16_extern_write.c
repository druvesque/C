#include<stdio.h>

extern int count;

void write_extern() {
    count = 5;
    printf("%d", count);
}
