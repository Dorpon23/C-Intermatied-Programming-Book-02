#include<stdio.h>
int main()
{
    int marks[]={10,20,30};
    int *point[3],i;
    for(i=0;i<3;i++)
    {
       // printf("marks[%d]=%d\n",marks[i]);
        point[i]=&marks[i];
    }
     for(i=0;i<3;i++)
     {
         printf("pointer marks[%d]=%d\n",i,*point[i]);
     }

     return 0;
}
