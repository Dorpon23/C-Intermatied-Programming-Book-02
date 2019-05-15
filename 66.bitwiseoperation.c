#include<stdio.h>
int main()
{
    int OR,m,n;
    //while(scanf("%d %d",&m,&n)!=EOF)
    {
        scanf("%d %d",&m,&n);
        OR=m | n;
    }
    printf("%d | %d = %d\n",m,n,OR);
}
