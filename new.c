#include <stdio.h>

int main() {
    char begin_day[5], end_day[5];
    int begin_time[3], end_time[3];

    // Input for the beginning day and time
    scanf("Dia %d", &begin_time[0]);
    scanf("%d : %d : %d", &begin_time[1], &begin_time[2], &begin_time[3]);
    scanf(" Dia %d", &end_time[0]);
    scanf("%d : %d : %d", &end_time[1], &end_time[2], &end_time[3]);

    // Calculate the time in seconds for the beginning and ending times
    long long begin_seconds = (begin_time[0] * 24 * 60 * 60) + (begin_time[1] * 60 * 60) + (begin_time[2] * 60) + begin_time[3];
    long long end_seconds = (end_time[0] * 24 * 60 * 60) + (end_time[1] * 60 * 60) + (end_time[2] * 60) + end_time[3];

    // Calculate the event duration in seconds
    long long duration_seconds = end_seconds - begin_seconds;

    // Calculate days, hours, minutes, and seconds
    int days = duration_seconds / (24 * 60 * 60);
    duration_seconds %= 24 * 60 * 60;
    int hours = duration_seconds / (60 * 60);
    duration_seconds %= 60 * 60;
    int minutes = duration_seconds / 60;
    int seconds = duration_seconds % 60;

    // Output the result
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, minutes, seconds);

    return 0;
}
