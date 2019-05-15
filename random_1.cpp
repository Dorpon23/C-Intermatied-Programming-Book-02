#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100];

    int i;

    for(i=0;i<100;i++)
    {
        arr[i]=rand()%100;
    }

    for(i=0;i<100;i++)
    {
        printf("arr[%d] = %d\t",i,arr[i]);
    }
    return 0;
}
