#include<stdio.h>
void main() {
    char grade;
    printf("Enter a grade to know remarks: ");
    scanf("%c", &grade);
    switch(grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("V Good");
            break;
        case 'C':
            printf("Good");
            break;
        default:
            printf("Bad");
    }
}
