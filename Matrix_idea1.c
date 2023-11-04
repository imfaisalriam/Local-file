#include<stdio.h>
#include<string.h>
int main()
{
    int matrix[5][5];
    int row_for_one,col_for_one;
    for (int i = 0; i < 5; i++)
    {
            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                row_for_one=i;
                col_for_one=j;
            }
            }
            
    }
    while(row_for_one<2)
    {
        int temp=matrix[row_for_one+1][col_for_one];
        matrix[row_for_one+1][col_for_one]=matrix[row_for_one][col_for_one];
        matrix[row_for_one][col_for_one]=temp;
        row_for_one++;
    } 
    while(col_for_one<2)
    {
        int temp=matrix[row_for_one][col_for_one+1];
        matrix[row_for_one][col_for_one+1]=matrix[row_for_one][col_for_one];
        matrix[row_for_one][col_for_one]=temp;
        col_for_one++;
    } 

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}