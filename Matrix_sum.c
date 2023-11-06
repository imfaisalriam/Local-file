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
    int n,m;
    printf("Enter Row and Colom of matrixs: ");
    scanf("%d %d",&n,&m);
    int matrix1[n][m];
    int matrix2[n][m];

    printf("Enter matrix2: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
        
    }
    printf("Enter matrix2: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
        
    }

    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        
    }

    printf("Sum of Matrix1 & Matrix2: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",sum[i][j]);
        }printf("\n");
        
    }


    



    return 0;
}