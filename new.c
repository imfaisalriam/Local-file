#include <stdio.h>

int main() {
    /*int min,max;
    float avg=0;
    int ar[6];
    for (int  i = 0; i < 6; i++)
    {
        scanf("%d",&ar[i]); 
    }

    min=ar[0];
    max=ar[0];

    for (int  i = 0; i < 6; i++)
    {
        avg+=ar[i];
        if (min>ar[i])
        {
            min=ar[i];
        }if (max<ar[i])
        {
            max=ar[i];
        }
        
        
    }
    avg=avg/6;
    printf("%d   %d   %.2f",min,max,avg);*/

    int ar[6]={2,3,4,5,6,7};
    char condition;

    do
    {
        int i,value;
        printf("Enter location: ");
        scanf("%d",&i);
        printf("Enter the value you input: ");
        scanf("%d",&value);
        ar[i-1]=value;
        for ( int j = 0; j < 6; j++)
        {
            printf("%d ",ar[j]);
        }
        
        printf("\ndo you want to repet it(Y/N): ");
        scanf(" %c",&condition);
    } while (condition=='Y'||condition=='y');
    

    



    return 0;
}
