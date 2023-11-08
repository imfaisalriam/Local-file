#include <stdio.h>

int main() {
    int init_hours, init_minutes, init_seconds;
    char init_time[] = "08 : 12 : 23";

    int parsed_values1 = sscanf(init_time, "%d : %d : %d", &init_hours, &init_minutes, &init_seconds);
    
    //if (parsed_values1 == 3) {
        printf("Hours: %d, Minutes: %d, Seconds: %d\n", init_hours, init_minutes, init_seconds);
    //} else {
   //     printf("Invalid time format.\n");
   // }
    
    return 0;
}
