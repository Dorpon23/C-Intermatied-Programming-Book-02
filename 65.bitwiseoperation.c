#include<stdio.h>
int main()
{
    int AND,m,n;
    //while(scanf("%d %d",&m,&n)!=EOF)
    {
        scanf("%d %d",&m,&n);
        AND=m & n;
    }
    printf("%d & %d = %d\n",m,n,AND);
}
