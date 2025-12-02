#include<stdio.h>
#include<string.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
    unsigned int v1 : 2;
    unsigned int v2 : 2;
} status1;

struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated: 1;
} status2;

struct {
    unsigned int v3 : 1;
} status3;


int main() {
    printf("Memory size occupied by status1: %d\n", sizeof(status1));
    printf("Memory size occupied by status2: %d\n", sizeof(status2));
    printf("Memory size occupied by status3: %d\n", sizeof(status3));
    return 0;
}
