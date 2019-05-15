#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    srand(time(NULL));
    //rand();
    int i;
    for(i=0;i<100;i++)
    {
    int random_number = rand() % 100 + 1;
    printf("%d\t",random_number);
    }

}
