// NOTE: This is not token pasting, this is compile-time string builder and not run-time formatting macro.
#include<stdio.h>
#define JOIN(s1, s2) printf("\n%s %s", s1, s2);

int main() {
    char *str1 = "Digital";
    char *str2 = "Electronics";
    JOIN(str1, str2);
    return 0;
}
