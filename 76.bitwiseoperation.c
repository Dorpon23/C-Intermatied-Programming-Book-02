#include<stdio.h>
int main()
{
    int ara[]={1,2,3,4,1,2,3,5,19};
    int result,i,n=9;
    //int  count=0;
    result=ara[0];
      int  count=0;
    for(i=0;i<n;i++)
    {

        if(ara[i]==result)
          count++;
     printf("Result:%d\n",ara[i]);
     printf("coun:%d\n",count);

    }

    printf("coun:%d\n",count);
    return 0;
}
