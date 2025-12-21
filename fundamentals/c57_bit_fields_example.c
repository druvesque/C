#include<stdio.h>
#include<string.h>

struct {
    unsigned int age: 3;
} Age;

int main() {
    Age.age = 4;
    printf("\nSizeof(age): %d", sizeof(Age));
    printf("\nInitial, Age.age: %d", Age.age);
    Age.age = 7;
    printf("\nNew, Age.age: %d", Age.age);
    Age.age = 15;
    printf("\nWhen Age = 15 (above bit limit), Age.age: %d", Age.age);
    return 0;
}
