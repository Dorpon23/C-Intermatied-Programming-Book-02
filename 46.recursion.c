#include<stdio.h>
void func()
{
    int a=10;
    static int s=10;
    a=a+2;
    s=s+2;
    printf("a = %d s=%d\n",a,s);
}
int main()
{
    func();
    func();
    func();

    return 0;
}
/*
static variable always memory preserve
s=10
s=10+2=12
s=12+2=14;
s=14+2=16
*/
