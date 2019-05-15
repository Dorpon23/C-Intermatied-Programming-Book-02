#include<stdio.h>
long long int permu(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*permu(n-1);
}
int main()
{
   long long int n,r,f1,f2,f22,f3,nCr;
    scanf("%lld %lld",&n,&r);
    f1=permu(n);
    printf("f1=%lld\n",f1);
    f22=permu(r);
    f2=(n-r);
    f3=permu(f2);
    printf("f3=ll%d\n",f3);
    nCr=f1/(f22*f3);
    printf("Combination=%lld",nCr);
}

