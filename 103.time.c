#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i;
    time_t t;
    srand((unsigned) time(&t));
    for(i=0;i<100;i++)
    {
        //if(t>=0 && t<=100)
        {
            printf("%d\t",(rand()%100+1));
        }

    }
    return 0;
}

