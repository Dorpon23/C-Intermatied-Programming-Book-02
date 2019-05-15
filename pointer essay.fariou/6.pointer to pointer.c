#include<stdio.h>
int main()
{

    int a=100;
    int *p,**p1;
    p=&a;
    p1=&p;
    **p1=245;
    printf("%d\n",a);
   // **p1=245;
    printf("%d\n",*p);
    printf("%d\n",**p1);
}
