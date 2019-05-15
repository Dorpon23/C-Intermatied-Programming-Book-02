#include<stdio.h>
int main()
{
    int arr[30][30],arr1[30][30],arr2[30][30];
    int i,j,k,row,column,sum=0;
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter column:");
    scanf("%d",&column);

    printf("Enter Element Array\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter Element Array1\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter Element Multiplication:\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            for(k=0;k<row;k++)
            {
            sum=sum+arr[i][k]*arr1[k][j];
            printf("Matrix[%d][%d]=%d\t",i,j,sum);
            }
            arr2[i][j]=sum;
            sum=0;
        }
        printf("\n");

    }
    printf("Enter Element Multiplication + Addition:\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Matrix[%d][%d]=%d\t",i,j,arr2[i][j]);
        }
         printf("\n");
    }
}
