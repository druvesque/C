// DESC: C Program to understand extern storage class
// 
// NOTE: write_extern() method is defined in extern_write.c

#include<stdio.h>

int count;
extern void write_extern();

int main() {
    write_extern();
    return 0;
}
