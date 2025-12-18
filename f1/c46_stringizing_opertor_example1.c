#include<stdio.h>
#define str(x) #x
#define Xstr(x) str(x)
#define oper gamma

int main() {
    char *oper_name = Xstr(oper);
    printf("\nOper_name: %s", oper_name);
    return 0;
}
