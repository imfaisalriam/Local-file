#include<stdio.h>
int main()
{
    int n,a,b,sum=0,sum_num=0;
    scanf("%d %d %d",&n,&a,&b);

    for (int i = 1; i <= n; i++)
    {
        while (i!=0)
        {
            int rem=i%10;
            sum+=rem;
        }
        if (sum>=a&&sum<=b)
        {
            sum_num+=i;
        }
      
    }
    printf("%d",sum_num);
    
    
    
    
    
}