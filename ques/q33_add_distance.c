#include<stdio.h>
#include<math.h>

struct Distance {
    float feet;
    float inch;
};

void add_dist(struct Distance, struct Distance);

int main() {
    struct Distance d1 = {3.5, 5.6};
    struct Distance d2 = {5.6, 6.8};
    add_dist(d1, d2);
    return 0;
}

void add_dist(struct Distance a, struct Distance b) {
    float feet_add, inch_add;
    feet_add = a.feet + b.feet;
    inch_add = a.inch + b.inch;
    
    if (inch_add > 12) {
        feet_add = feet_add + (inch_add / 12);
        inch_add = fmod(inch_add, 12);
    }

    printf("Feet: %.2f", feet_add);
    printf("\nInch: %.2f", inch_add);
}
