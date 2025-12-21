// NOTE: 24-HOUR CLOCK IS ASSUMED
// CONSTRAINTS: 0 <= HOURS <= 23, 0 <= MINUTES <= 59, 0 <= SECONDS <= 59
#include<stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

void time_difference(struct Time, struct Time);

int main() {
    struct Time t1 = {8, 35, 43};
    struct Time t2 = {4, 23, 34};
    time_difference(t1, t2);
    return 0;
}

void time_difference(struct Time a, struct Time b) {
    int hr_diff, min_diff, sec_diff;

    hr_diff = a.hour - b.hour;
    if (hr_diff < 0)
        hr_diff *= (-1);

    min_diff = a.minute - b.minute;
    if (min_diff < 0)
        min_diff *= (-1);

    sec_diff = a.second - b.second;
    if (sec_diff < 0)
        sec_diff *= (-1);

    printf("TIME DIFFERENCE");
    printf("\nHOURS: %d", hr_diff);
    printf("\nMINUTES: %d", min_diff);
    printf("\nSECONDS: %d", sec_diff);
}
