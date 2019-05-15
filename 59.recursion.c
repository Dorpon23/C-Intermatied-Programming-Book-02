#include<stdio.h>
#include<string.h>
void reverse()
{
    char s;
    scanf("%c",&s);
    if(s!='\n')
    {
        reverse();
        printf("%c",s);
    }
}
int main()
{
   reverse();
}
