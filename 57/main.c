#include <stdio.h>
#include <stdlib.h>
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
    printf("%d\n",fib(n));
    printf("%d",f_calls);
}
