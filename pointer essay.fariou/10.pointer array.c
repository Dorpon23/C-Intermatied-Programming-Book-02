#include<stdio.h>
int main()
{
  int *p;
  int arr[5],i,total=0;
  printf("Enter a number\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",&arr[i]);
  }
  p=&arr;
  printf("Elements are");
  for(i=0;i<5;i++)
  {
      printf("%d\n",*p);
      total=total+*p;
      p++;
  }
  printf("total=%d",total);
}
