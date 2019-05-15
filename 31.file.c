#include<stdio.h>
int main ()
{
    int a,b,c;
    FILE *fp;
    fp=fopen("in.txt","r");
    fscanf(fp,"%d %d",&a,&b);
    c=a+b;
    printf("%d %d %d\n",a,b,c);
   // printf("%d+%d=%d",a,b,c);

    return 0;
}

