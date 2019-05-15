#include<stdio.h>
int main()
{
    int XOR,m,n;
    //while(scanf("%d %d",&m,&n)!=EOF)
    {
        scanf("%d %d",&m,&n);
        XOR=m ^ n;
    }
    printf("%d ^ %d = %d\n",m,n,XOR);
}

