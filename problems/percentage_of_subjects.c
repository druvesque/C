#include<stdio.h>
void main() {
    float eng, math, sci, sst, hindi;
    printf("Enter Marks (English, Maths, Science, Social Sciences, Hindi): ");
    scanf("%f %f %f %f %f", &eng, &math, &sci, &sst, &hindi);
    printf("Sum: %f, Percentage: %f", (eng + math + sci + sst + hindi), ((eng + math + sci + sst + hindi) / 500) * 100);
}
