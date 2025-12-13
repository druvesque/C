#include<stdio.h>

int main() {
    char color[7];
    printf("Enter color code: ");
    scanf("%s", color);
    for(int i = 0; i <= 6; i++) {
        switch(color[i]) {

            case 'V':
                printf("Violet\n");
                break;

            case 'v':
                printf("Violet\n");
                break;

            case 'I':
                printf("Indigo\n");
                break;

            case 'i':
                printf("Indigo\n");
                break;

            case 'B':
                printf("Blue\n");
                break;

            case 'b':
                printf("Blue\n");
                break;

            case 'G':
                printf("Green\n");
                break;

            case 'g':
                printf("Green\n");
                break;

            case 'Y':
                printf("Yellow\n");
                break;

            case 'y':
                printf("Yellow\n");
                break;

            case 'O':
                printf("Orange\n");
                break;

            case 'o':
                printf("Orange\n");
                break;

            case 'R':
                printf("Red\n");
                break;

            case 'r':
                printf("Red\n");
                break;

            default:
                printf("%c is invalid color code!\n", color[i]); 
        }
    }
    return 0;
}
