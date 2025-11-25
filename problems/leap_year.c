#include<stdio.h>
void main() {
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
        printf("Leap Year");
    else if (year % 100 == 0 && year % 4 == 0)
        printf("Not a Leap Year");
    else if (year % 4 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}
