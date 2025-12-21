#include<stdio.h>
#include<string.h>

struct {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
} status1;

struct {
    unsigned int a: 1;
    unsigned int b: 1;
    unsigned int c: 1;
    unsigned int d: 1;
    unsigned int e: 1;
} status2;

int main() {
    printf("\nSize without bit fields (5 unsigned int): %d", sizeof(status1));
    printf("\nSize with bit fields = 1 (5 unsigned int): %d", sizeof(status2));
    return 0;
}
