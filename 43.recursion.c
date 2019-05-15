#include<stdio.h>
int x=3;
void myfnc(int y)
{
    y=y*2;
    x=x+10;
    printf("myfnc,x=%d,y=%d\n",x,y);
}
int main()
{
    int y=5;
    x=10;

    myfnc(y);
    //x=10;
    printf("main,x=%d,y=%d\n",x,y);
    return 0;
}
/*
#include<stdio.h>
int x=3;
void myfnc(int y,int x)
{
    y=y*2;
    x=x+10;
    printf("myfnc,x=%d,y=%d\n",x,y);
}
int main()
{
    int y=5;
    x=10;

    myfnc(y,x);
    printf("main,x=%d,y=%d\n",x,y);
    return 0;
}*/

