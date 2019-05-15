#include<stdio.h>
int a;
void add(void)
{
  int b;
  printf("Enter value b");
  scanf("%d",&b);
  printf("Enter Addition %d",(a+b));

}
int main()
{
    printf("Enter value a");
    scanf("%d",&a);
    add();
    return 0;
}
