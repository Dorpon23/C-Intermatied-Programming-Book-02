#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("value of x: %d\n",x);
    *p=20;
    printf("value of x: %d\n",x);
    printf("Address of x: %d\n",&x);
    printf("value of p: %d\n",p);
    printf("value of p: %d\n",&p);
    printf("value of p: %d\n",*p);


}
