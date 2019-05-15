#include<stdio.h>
char charertes(char str)
{

    if(str>='A' && str<='Z')
    {
        printf("capital letter print");
    }
    else if(str>='a' && str<='z')
    {
        printf("small letter print");
    }
    else if(str>='0' &&str<='9')
    {
       // return 1;
        printf("number print");

    }
}
int main()
{
     char str,c;
     str=getchar();
    //scanf("%c",&str);
     c=charertes(str);
   // printf("%c",str);

}
