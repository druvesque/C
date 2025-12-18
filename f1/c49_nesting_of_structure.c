#include<stdio.h>

struct address {
    char phone[10];
    char city[20];
    int pin;
};

struct emp {
    char name[15];
    struct address a;
};

int main() {
    struct emp e = {"John", "9554176354", "New Jersey", 10035};
    printf("\nName: %s", e.name);
    printf("\nPhone: %s", e.a.phone);
    printf("\nCity: %s", e.a.city);
    printf("\nPin: %d", e.a.pin);
    return 0;
}
