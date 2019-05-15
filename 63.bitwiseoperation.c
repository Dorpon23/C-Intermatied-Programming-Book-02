#include<stdio.h>
int main()
{
    int n,x,m;
    while(1)
    {
        printf("please Enter your number(0 to Exit):");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        printf("How many bits you want to shift left:");
        scanf("%d",&x);
        m=n<<x;
        printf("Result:%d\n",m);
    }
}
