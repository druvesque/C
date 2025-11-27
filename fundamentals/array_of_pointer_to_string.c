#include<stdio.h>
int main() {
    int i;
    char *name[3] = {"India", "Australia", "England"};
    for (i = 0; i < 3; i++) {
        printf("%s\n", name[i]);
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", name[i]);
    }
    return 0;
}
