#include <stdio.h>

int main() {
    int min=0,max=0;
    float avg=0;
    int ar[6];
    for (int  i = 0; i < 6; i++)
    {
        scanf("%d",&ar[i]);
        min-=ar[i];
        max+=ar[i];
    }
    avg=(float)max/6;
    printf("%d   %d   %.2f",min,max,avg);
    



    return 0;
}
