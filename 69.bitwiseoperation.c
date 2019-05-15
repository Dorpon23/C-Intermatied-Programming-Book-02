#include<stdio.h>
char to_upper(char ch)
{
    return ch & 93;
}
char to_lower(char ch)
{
    return ch | 32;
}
int main()
{
    char str[]="AbCdEfGhIjKlMnPqRsTuVwXyZ[";
    int i;
    for(i=0;i<26;i++)
    {
        printf("Uppercase:%c,",to_upper(str[i]));
        printf("Lowercase:%c,",to_lower(str[i]));
    }
}
//65 & 95 mil powA JAI =010 ONIIRUP 65-95 PORJOTO 010 MIL POWA JAI
