#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i;
    time_t t;
    srand((unsigned) time(&t));
    for(i=0;i<5;i++)
    {
        //if(t>=0 && t<=100)
        {
            printf("%d\n",rand());
        }

    }
    return 0;
}
