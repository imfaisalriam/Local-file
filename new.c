#include <stdio.h>

int main() {
    int diff_of_time=265313;
    int diff_day=diff_of_time/86400;
    diff_of_time=diff_of_time%86400;
    int diff_hour=diff_of_time/3600;
    diff_of_time=diff_of_time%3600;
    int diff_munite=diff_of_time/60;
    int diff_second=diff_of_time%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",diff_day,diff_hour,diff_munite,diff_second);


    return 0;
}
