#include<stdio.h>

const int Max=4;

int main()
{

    char *names[]=
    {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
    };
     int i;

   for ( i = 0; i < Max; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }

   return 0;
}
