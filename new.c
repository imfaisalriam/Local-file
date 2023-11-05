#include <stdio.h>
#include<string.h>
int main()
{
    char math[100];
    scanf("%99s", math);
    int len =strlen(math);
    //printf("%d",len);
    for (int i = 0; i < len -1; i += 2)
    {
        for (int j = 0; j < len-1-i; j += 2)
        {
            if (math[j] > math[j+2 ])
            {
                int temp = math[j];
                math[j] = math[j+2 ];
                math[j +2] = temp;
            }
        }
    }
    
        for (int i = 0; i < len; i++)
        {
            printf("%c", math[i]);
        }
        
    

    return 0;
}