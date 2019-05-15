#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);

    printf("Values Before sawping\n ");
    printf("Enter a=%d\n",a);
    printf("Enter b=%d\n",b);

    swap(&a,&b);

    printf("Values After sawping\n");
    printf("Enter a=%d\n",a);
    printf("Enter b=%d\n",b);

    return 0;

}

void swap(int *x,int *y)
{
    //change value
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
