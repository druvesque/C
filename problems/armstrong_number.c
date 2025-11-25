#include<stdio.h>
#include<math.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = 0;
    int digits;
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }
    int temp2 = n;
    while (temp2 != 0) {
        int remainder = temp2 % 10;
        result = result + pow(remainder, digits);
        temp2 = temp2 / 10;
    }
    if (result == n)
        printf("Armstrong Number");
    else
        printf("Not an armstrong number");
}
