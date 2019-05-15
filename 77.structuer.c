#include<stdio.h>
int main()
{
    struct student
    {
        int id;
        char Name[40];
    };
    struct student one={1,"TAHMID Rafi"};

    printf("Id=%d\n",one.id);
    printf("Name=%s\n",one.Name);
}
