#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,count;
    scanf("%d",&n);
    count=0;
    while(n)
    {
        if(n&1)
        {
            count++;
            n=n>>1;
        }
    }
    printf("Number of 1:%d\n",count);
}
