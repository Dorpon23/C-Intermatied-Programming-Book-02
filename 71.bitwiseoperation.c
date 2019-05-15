#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,count=0,d=0;

    for(i=0;i<str[i];i++)
    {

       if(str[i]=='1')
        {
            count++;
        }
       if(str[i]>='2' && str[i]<='9'){
            printf("only support 1 value");
            exit(0);
        }

    }
    printf("Number of bit 1:%d",count);
}
