#include<stdio.h>
int main()
{
    struct student
    {
        int id;
        char *Name;
    };
    struct student one;
    one.id=1;
    one.Name="TAHMID rafi";

    printf("Id=%d\n",one.id);
    printf("Name=%s\n",one.Name);
}

