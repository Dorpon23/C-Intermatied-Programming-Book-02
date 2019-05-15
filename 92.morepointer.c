#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("Please Enter the number of students:");
    scanf("%d",&n);

    marks=(int *) calloc(n,sizeof(int));
   /* if(marks=NULL)
    {
        printf("Memory allocation failed for marks\n");
        return 1;
    }*/
     printf("Please Enter the marks for each students:");
    for(i=0;i<n;i++)
    {
     scanf("%d",&marks[i]);
    }
    printf("Now here you can see the values:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;

}
