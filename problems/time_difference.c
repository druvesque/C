#include<stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

int time_difference(struct Time *t1, struct Time *t2) {

    int h_diff, m_diff, s_diff;

    h_diff = t1->hour - t2->hour;
    if (h_diff < 0) {
        h_diff = h_diff * -1;
    }

    m_diff = t1->min - t2->min;
    if (m_diff < 0) {
        m_diff = m_diff  * -1;
    }

    s_diff = t1->sec - t2->sec;
    if (s_diff < 0) {
        s_diff = s_diff * -1;
    }
    printf("Time Difference, hour(s): %d, minute(s): %d, second(s): %d", h_diff, m_diff, s_diff);
}

void main() {
    struct Time t1 = {7, 36, 0};
    struct Time t2 = {8, 42, 0};
    time_difference(&t1, &t2);
}
