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
    long long int n,r,f1,f2,f3,nPr;
    scanf("%lld %lld",&n,&r);
    f1=permu(n);
    printf("f1=%lld\n",f1);
    f2=(n-r);
    f3=permu(f2);
    printf("f3=%lld\n",f3);
    nPr=(f1/f3);
    printf("Permutation=%lld",nPr);
}
/*int permu1(int f2)
{
    if(f2==0)
    {
        return 1;
    }
    return f2*permu1(f2-1);
}*/
