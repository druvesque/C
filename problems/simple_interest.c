#include<stdio.h>
void main() {
    float principal, rate, time;
    printf("Enter Principal Amount, Rate, Time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    printf("\nSimple Interest: %f", ((principal * rate * time)/100));
}
