#include<stdio.h>

struct Distance {
    int feet;
    int inch;
};

void add_distance(struct Distance *a, struct Distance *b) {
    int f_add = a->feet + b->feet;
    int i_add = b->inch + b->inch;
    if (i_add >= 12) {
        f_add += i_add / 12;
        i_add = i_add % 12;
    }
    printf("Added distance, feet: %d, inch: %d", f_add, i_add);
}

void main() {
    struct Distance d1 = {5, 11};
    struct Distance d2 = {6, 7};
    add_distance(&d1, &d2);
}
