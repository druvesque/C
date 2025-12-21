#include<stdio.h>
#include<math.h>

int main() {
    int n, cpy, calc = 0, count = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    cpy = n;
    while (cpy != 0) {
        count++;
        cpy = cpy / 10;
    }
    cpy = n;
    while (cpy != 0) {
        int remainder = cpy % 10;
        calc = calc + pow(remainder, count);
        cpy = cpy / 10;
    }
    if (calc == n) 
        printf("\nArmstrong Number!");
    else
        printf("Not an armstrong number.");
    return 0;
}
