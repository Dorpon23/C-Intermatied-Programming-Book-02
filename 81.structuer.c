#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char Name[40];
};
int main()
{
    struct student one;
    scanf("%d",&one.id);
    scanf(" %[^\n]",one.Name);// full name support korba

    printf("ID=%d\n",one.id);
    printf("Name=%s\n",one.Name);
}

