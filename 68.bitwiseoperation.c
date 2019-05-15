#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
       if(n&1)
    {
        printf("Number is ODD\n");
    }
    else
    {
       printf("Number is EVEN\n");
    }
    }
    return 0;

}
