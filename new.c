#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str1[n];
    char str2[n];
    scanf("%s",str1);

    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = 0; j <2; j++)
        {
            str2[j]=str1[i];
            printf("%c",str2[j]);
        }
        
    }
    
    
    
}