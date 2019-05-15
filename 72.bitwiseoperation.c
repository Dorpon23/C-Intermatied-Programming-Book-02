#include<stdio.h>

int main()
{
    int n, i,count;
    scanf("%d",&n);
    count=0;
    // input n=4,5,6 etc. and so on
    while(n)
    {
        if(n&1)

            count++;
            n=n>>1;
    }
    printf("Number of 1:%d\n",count);
    return 0;
}

