#include<stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    printf("\nEnter Principal Amount (in $): ");
    scanf("%f", &principal);
    printf("\nEnter Time Period (in years): ");
    scanf("%f", &time);
    printf("\nEnter Rate (in %%): ");
    scanf("%f", &rate);
    simple_interest = (principal * time * rate) / 100;
    printf("\nSimple Interest on given parameters is: %.2f$", simple_interest);
    return 0;
}    
