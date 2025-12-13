#include<stdio.h>

int main() {
    char user_name;
    int password;
    printf("\nEnter Username: ");
    scanf("%c", &user_name);
    printf("\nEnter Password: ");
    scanf("%d", &password);
    if (user_name == 'R') {
        if (password == 12345)
            printf("\nHello Mr.X, Welcome to the new world order!");
        else
            printf("\nAccess Denied");
    }
    else
        printf("\nMost Wanted");
    return 0;
}
