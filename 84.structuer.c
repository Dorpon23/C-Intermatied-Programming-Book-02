#include<stdio.h>
#include<string.h>
typedef struct
{
char first[20];
char last[20];
}nametype;
typedef struct
{
    int id;
    nametype name;
}studenttype;
int main()
{
     studenttype student[5];
    int i,n=5;
    for(i=0;i<n;i++)
    {
          printf("Enter the id for the student:",i+1);
          scanf("%d",&student[i].id);

          printf("Enter the First Name for the student:",i+1);
          scanf("%s",student[i].name.first);

          printf("Enter the Last Name for the student:",i+1);
          scanf("%s",student[i].name.last);

          printf("\n");
    }
    printf("Output:\n\n");
    for(i=0;i<n;i++)
    {
    printf("Id=%d\n",student[i].id);
    printf("Name=%s %s\n",student[i].name.first,student[i].name.last);
    }
    return 0;

}

