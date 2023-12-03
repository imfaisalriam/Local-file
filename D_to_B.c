#include<stdio.h>
int main()
{
    int num,i=0;
    int ar[10];
    scanf("%d",&num);
    while (num!=0)
    {
        int rem=num%16;
        if (rem<10)
        {
            rem=rem+'0';
            ar[i]=rem;
        }else
        {
            rem=rem+55;
            ar[i]=rem;
        }
        num/=16;
        
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        printf("%c",ar[j]);
    }
    

    
    
}