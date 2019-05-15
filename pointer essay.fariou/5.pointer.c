#include<stdio.h>
int main()
{

    int a=100;
    int *p,**p1;
    p=&a;
    p1=&p;
    printf("%d\n",*p);

    printf("%d\n",**p1++);
}
