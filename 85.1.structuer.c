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
int calculate_grade(struct studenttype s,int mark)
{
    if(mark>=80)
    {
        return strcpy(s.grade,"A+");
    }
   else if(mark>=70)
    {
       return strcpy(s.grade,"A");
    }
   else if(mark>=60)
    {
       return strcpy(s.grade,"A-");
    }
    else if(mark>=50)
    {
       return strcpy(s.grade,"B");
    }
    else if(mark>=40)
    {
        return strcpy(s.grade,"C");
    }
    else
    {
       return strcpy(s.grade,"F");
    }
}
int main()
{
    struct studenttype student[3];
    int i,n=3;
    int marks[]={72,82,60};
    for(i=0;i<n;i++)
    {
        printf("Enter the ID for student %d:",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the First Name for student %d:",i+1);
        scanf("%s",student[i].name.first);
        printf("Enter the Last Name for student %d:",i+1);
        scanf("%s",student[i].name.last);
        strcpy(student[i].grade,"");
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        calculate_grade(student[i],marks[i]);
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

