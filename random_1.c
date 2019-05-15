#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100];

    int i;

    for(i=1000;i<10000;i++)
    {
        arr[i]=rand()%1000;
    }

    for(i=1000;i<10000;i++)
    {
        printf("arr[%d] = %d\t",i,arr[i]);
    }
    return 0;
}
