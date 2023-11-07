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
    int middle_a=0;
    int num;
    scanf("%d",&num);
    int start=0,end=7;
    while (start<=end)
    {
        int mid=(start+end)/2;

        if (arr[mid]==num)
        {
            printf("YES & position: %d",mid);
            break;
        }else if (arr[mid]>num)
        {
            end=mid-1;
        }else if(arr[mid]<num)
        {
            start=mid+1;
        }else
        {
            printf("NO");
        }
         
    }
    if (start>end)
    {
        printf("NO");
    }
    
    
    
    
    


    return 0;
}