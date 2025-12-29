#include<stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0)
        printf("Invalid Age!");
    else if (age < 18)
        printf("You are not eligible to vote.");
    else
        printf("You can vote!");
    return 0;
}


