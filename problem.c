#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int pow2(int x, int y)
{
    int z=1;
    for(int i=1;i<=y;i++) z*=x;
    return z;
}
int main()
{
    int k,sum_a=0,sum_b=0,count_a=0,count_b=0;
    scanf("%d",&k);
    int a,b;
    scanf("%d%d",&a,&b);

    while (a!=0)
    {
        int rem=a%10;
        sum_a+=rem*pow2(k,count_a);
        //printf("%d\n",sum_a);
        a/=10;
        count_a++;
    }
    while (b!=0)
    {
        int rem=b%10;
        sum_b+=rem*pow2(k,count_b);
        //printf("%d\n",sum_b);
        b/=10;
        count_b++;
    }
    int y=2*pow(5,2)+3;
    //printf("%d\n",y);

    printf("%d\n",sum_a*sum_b);
    
    
}