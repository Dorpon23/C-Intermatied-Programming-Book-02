#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;

    int i;

    srand((unsigned) time(&t));

    for(i=0;i<5;i++)
    {
           //if()
        printf("%d\n",rand());
    }

  return 0;
}
