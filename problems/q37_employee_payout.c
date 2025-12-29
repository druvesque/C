#include<stdio.h>
#include<string.h>

int main() {
    char id[10];
    float working_hrs;
    float salary_per_hr;
    printf("Enter Employee ID: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';
    printf("\nEnter Working Hours (in a month): ");
    scanf("%f", &working_hrs);
    printf("\nEnter Salary Per Hour: ");
    scanf("%f", &salary_per_hr);
    float salary = salary_per_hr * working_hrs;
    printf("\nEMPLOYEE DATA");
    printf("\nEmployee ID: %s", id);
    printf("\nSalary: $%.2f", salary);
    return 0;
}
