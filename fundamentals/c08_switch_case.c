#include<stdio.h>

int main() {
    char grade;
    printf("\nEnter a grade: ");
    scanf("%c", &grade);
    switch(grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Very Good");
            break;
        case 'C':
            printf("Good");
            break;
        default:
            printf("Bad");
    }
    return 0;
}
