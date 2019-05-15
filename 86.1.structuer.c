#include<stdio.h>
#include<string.h>
struct nametype
{
    char first[20];
    char last[20];
};
struct studenttype
{
    int id;
    struct nametype name;
    char grade[3];
};
void calculate_grade(struct studenttype *s,int mark)
{
    if(mark>=80)
    {
        strcpy(s->grade,"A+");
    }
   else if(mark>=70)
    {
        strcpy(s->grade,"A");
    }
   else if(mark>=60)
    {
        strcpy(s->grade,"A-");
    }
    else if(mark>=50)
    {
        strcpy(s->grade,"B");
    }
    else if(mark>=40)
    {
        strcpy(s->grade,"C");
    }
    else
    {
        strcpy(s->grade,"F");
    }
}
int main()
{
    struct studenttype student[5];
    int i,n=5;
    int marks[]={72,82,60,20,50};
    for(i=0;i<n;i++)
    {
        printf("Enter the ID for student %d:",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the First Name for student %d:",i+1);
        scanf("%s",student[i].name.first);
        printf("Enter the Last Name for student %d:",i+1);
        scanf("%s",student[i].name.last);

        calculate_grade(&student[i],marks[i]);
        printf("\n");
    }

      printf("Output:\n\n");
    for(i=0;i<n;i++)
    {
    printf("Id=%d\n",student[i].id);
    printf("Name=%s %s\n",student[i].name.first,student[i].name.last);
    printf("Grade: %s\n",student[i].grade);
    }
    return 0;
}


