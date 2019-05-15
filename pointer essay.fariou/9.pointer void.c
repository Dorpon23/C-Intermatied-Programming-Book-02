#include<stdio.h>
#include<string.h>
int main()
{
    int a=100;
    float b=100.03;
    double c=233.894;

    void *p,*p1,*p2;
    p=&a;
    p1=&b;
    p2=&c;

    printf("value of A=%d\n",*(int*)p);
    printf("value of B=%.2f\n",*(float*)p1);
    printf("value of c=%0.2lf",*(double*)p2);

    return 0;
}
