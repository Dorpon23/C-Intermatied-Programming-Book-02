#include<stdio.h>
int f_calls=0;
int fib(int n)
{
    f_calls=f_calls+1;
    if (n==1 || n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("fabonic number:%d\n",fib(n));
    printf("number call:%d",f_calls);
}
//number call=(2*fabonic number)-1;
