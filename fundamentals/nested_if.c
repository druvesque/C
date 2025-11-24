#include<stdio.h>
void main() {
    char user_name;
    int password;
    printf("Enter Username & Password: ");
    scanf("%c %d", &user_name, &password);
    if (user_name == 'R') {
        if (password == 12345) {
            printf("Welcome!");
        }
        else {
            printf("Access Denied");
        }
    }
    else
        printf("Most Wanted");
}
