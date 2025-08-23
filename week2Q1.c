#include <stdio.h>

int main() {
    double busy_time, idle_time, utilization;

    printf("Enter CPU busy time: ");
    scanf("%lf", &busy_time);
    printf("Enter CPU idle time: ");
    scanf("%lf", &idle_time);
    utilization = (busy_time / (busy_time + idle_time)) * 100.0;
    printf("CPU Utilization: %f", utilization);
    return 0;
}
