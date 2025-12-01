#include<stdio.h>
void main() {
    struct address {
        char phone[10];
        char city[20];
        int pin;
    };

    struct emp {
        char name[15];
        struct address a;
    };

    struct emp e = {"Ron", "12034", "delhi", 201301};
    printf("\nname: %s, phone: %s", e.name, e.a.phone);
    printf("\ncity: %s, pin: %d", e.a.city, e.a.pin);
}
