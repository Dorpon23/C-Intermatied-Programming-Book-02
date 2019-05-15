#include<stdio.h>
#include<string.h>
struct name
{
    char Name[20];
    char Father[20];
    char Mather[20];
    int id;
};
struct date
{
    int date;
};

struct year
{
    char Month[20];
    int  Year;
    struct date y;
};


int main()
{
    while(1)
    {
    struct name one;
    struct year yt;

    scanf(" %[^\n]",one.Name);
    scanf(" %[^\n]",one.Father);
    scanf(" %[^\n]",one.Mather);
    scanf("%d",&yt.y.date);
    scanf(" %[^\n]",yt.Month);
    scanf("%d",&yt.Year);
    scanf(".%d",&one.id);
    printf("\t Government of the People's Republic of Bangladesh\n");
    printf("\t                                                \n");
    printf("\t NATIONAL ID CARD\n");
    printf("\t----------------------------------------------------------------------------\t\n");
    printf("\t NAME:%s\n",one.Name);
    printf("\t Father NAME:%s\n",one.Father);
    printf("\t Mather NAME:%s\n",one.Mather);
    printf("\t Date of Birth:%d %s %d\n",yt.y.date,yt.Month,yt.Year);
    printf("\t ID=%d\n",one.id);

    }


}
