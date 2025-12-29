#include<stdio.h>
#include<string.h>

int main() {
    int roll_no;
    char name[50];
    int arr[5];
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    printf("\n");
    printf("Enter Marks (out of 100)\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    float total = 0;
    for (int i = 0; i < 5; i++)
        total += arr[i];

    float percentage = (total / 5); 
    char division[10];
    if (percentage >= 75)
        strcpy(division, "First");
    else if (percentage < 75 && percentage >= 50)
        strcpy(division, "Second");
    else if (percentage < 50 && percentage >= 33)
        strcpy(division, "Third");
    else 
        strcpy(division, "Fail");
    
    printf("\n\nRESULTS");
    printf("\nTotal (out of 500): %.2f", total);
    printf("\nPercentage (out of 100): %.2f", percentage);
    printf("\nDivision: %s", division);
    
    
    return 0;
}
