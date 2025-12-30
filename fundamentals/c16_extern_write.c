// DESC: Program that contains the extern function
//       that is used in extern_main

#include<stdio.h>

extern int count;

void write_extern() {
    count = 5;
    printf("%d", count);
}
