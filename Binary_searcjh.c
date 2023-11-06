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
    int num;
    scanf("%d",&num);
    int middle_ar=(0+7)/2;

    if (arr[middle_ar]>num)
    {
        for (int i = 0; i < middle_ar; i++)
        {
            if (arr[i]==num);
            {
                printf("YES & position: %d",i);
                break;
            }
            
        }
        
    }else if (arr[middle_ar]<num)
    {
        for (int i = middle_ar+1; i < 7; i++)
        {
            if (arr[i]==num);
            {
                printf("YES & position: %d",i);
                break;
            }
            
        }
        
    }else  if (arr[middle_ar]==num)
    {
                printf("YES & position: %d",middle_ar);
        
    }else
    {
        printf("NO");
    }
    
    


    return 0;
}