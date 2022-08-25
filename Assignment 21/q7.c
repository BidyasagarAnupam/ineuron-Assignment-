// Write a program to calculate the difference between two time periods.
#include<stdio.h>

struct time {
    int sec;
    int min;
    int hr;
};
void timeDifference(struct time t1, struct time t2, struct time* diff);

int main() {
    struct time startTime, endTime, diffTime;
    printf("Enter Start time\n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &startTime.hr, &startTime.min, &startTime.sec);

    printf("Enter End time\n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &endTime.hr, &endTime.min, &endTime.sec);

    timeDifference(startTime, endTime, &diffTime);

    printf("\nTime difference is: %d:%d:%d - ", startTime.hr, startTime.min, startTime.sec);
    printf("%d:%d:%d = ", endTime.hr, endTime.min, endTime.sec);
    printf("%d:%d:%d", diffTime.hr, diffTime.min, diffTime.sec);


    return 0;
}

void timeDifference(struct time start, struct time end, struct time* diff) {
    while (end.sec > start.sec) {
        --start.min;
        start.sec += 60;
    }
    diff->sec = start.sec - end.sec; // since diff is a pointer so we user ->(arrow) instaid of .(dot)
    while (end.min > start.min) {
        --start.hr;
        start.min += 60;
    }
    diff->min = start.min - end.min;
    diff->hr = start.hr - end.hr;
}
