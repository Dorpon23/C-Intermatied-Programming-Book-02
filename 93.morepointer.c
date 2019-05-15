#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ara[5],num[5];
    int i,j,n;
    for(i=0;i<5;i++)
    {
        printf("Enter the number of students for class %d :",i+1);
        scanf("%d",&n);

        num[i]=n;
        ara[i]=(int *) malloc(sizeof(int)*n);

        if(ara[i]==NULL)
        {
         printf("Memory allocation failed for marks\n");
         return 1;
        }
        for(j=0;j<n;j++)
        {
         printf("Enter Marks of students  %d :",j+1);
         scanf("%d",&ara[i][j]);
        }
    }

    printf("OUTPUT\n");
    for(i=0;i<5;i++)
    {
        printf("Class %d :",i+1);
         for(j=0;j<num[i];j++)
         {
            printf("ara[%2d][%2d]=%4d\t",i+1,j+1,ara[i][j]);
         }
         printf("\n");
    }
    return 0;



}
