#include<stdio.h>
int main()
{
    char c1[] = "Acccvf";
    char *p1;

    p1=&c1;

    printf("%p\n",*p1);
   // printf("%c\n",p1);
    printf("%s\n",p1);
       // printf("%s\n",*p1);
                 //not working

    return 0;
}
