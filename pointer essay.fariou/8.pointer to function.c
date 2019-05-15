#include<stdio.h>
void add(int *x, int *y)
{
    printf("Enter first value:%d\n",*x);
    printf("Enter second value:%d\n",*y);
    printf("Addition is %d\t",(*x+*y));

}

int main()
{
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    add(&a,&b);
    /*void(*ptr)(int,int);
    ptr=&add;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
*/
    //ptr(a,b);
}
