#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100];

    int i;

    for(i=0;i<100;i++)
    {
        arr[i]=(rand()%100)+1000;
    }

    for(i=0;i<100;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10000];

    int i;

    for(i=1000;i<10000;i++)
    {
        arr[i]=rand()%10000;
    }

    for(i=1000;i<10000;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
         if(arr[i]>=0 && arr[i]<=999)
        {
            break;
        }

    }
    return 0;
}*/
