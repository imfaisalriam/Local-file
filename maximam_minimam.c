/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j <7 ; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int kth_maxmim,kth_minimam;
    scanf("%d %d",&kth_maxmim,&kth_minimam);

    printf("kth Maximam: %d  kth_minimam: %d\n",arr[7-kth_maxmim],arr[kth_minimam-1]);
    
    
    


    return 0;
}