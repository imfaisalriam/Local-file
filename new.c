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
    int ar2[7];

    int i;
    printf("Enter the position: ");
    scanf("%d",&i);
    int insert_value;
    printf("Enter the value: ");
    scanf("%d",&insert_value);

    for (int j = 0; j < 7; j++)
    {
        if (j<i-1)
        {
            int temp =ar[j];
            ar2[j]=temp;
        }else if (j==i-1)
        {
            ar2[i-1]=insert_value;
        }else if(j>=i)
        {
            
            int temp=ar[j-1];
            ar2[j]=temp;
        }
        
        
    }
    for (int j = 0; j < 7; j++)
    {
        printf("%d ",ar2[j]);
    }
    
    

    
    
    return 0;
}
