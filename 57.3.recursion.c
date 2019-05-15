#include<stdio.h>
#include<string.h>
int f_calls=0;

int fibo(int n[])
{
    f_calls=f_calls+1;
    if(fibo[n] !=0)
    {
        return fibo[n];
    }
    if (n==1 || n==2)
    {
         return fibo[n];
    }
    fibo[n]= fibo[n-1]+fib[n-2];
    return fibo[n];
}
int main()
{
    int n[50];
    char s[3];
    fibo[1]=1;
    fibo[2]=1;
    scanf("%d",&n);
    if(n==1)
    {
        strcpy(s,"st");
    }
    else if(n==2)
    {
        strcpy(s,"nd");
    }
     else if(n==3)
    {
        strcpy(s,"rd");
    }
    else
    {
        strcpy(s,"th");
    }
     for(n=1;n<12;n++)
    {
        printf("%d:%d\n",n,fibo[n]);
    }
    printf("Number of Function calls:%d\n",f_calls);

    return 0;
}



