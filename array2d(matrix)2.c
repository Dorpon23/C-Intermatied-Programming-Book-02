#include<stdio.h>
int main()
{
    int arr[30][30],arr1[30][30],arr2[30][30];
    int i,j,row,column;
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter column:");
    scanf("%d",&column);

    printf("Enter Element Array\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("arr[%d][%d]:\t",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }


    printf("Enter Element Addition\n");
     for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            arr2[i][j]=arr[i][j];
            printf("arr2[%d][%d]=%d\n",j,i,arr2[i][j]);

        }
    }

}

