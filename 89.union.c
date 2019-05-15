#include<stdio.h>
union u
{
    char ch;
    int x;
    int y;
};
int main()
{
    union u uv;
    uv.ch='A';
    printf("uv.ch=%c\n",uv.ch);
    uv.x=17;
    printf("uv.x=%d\n",uv.x);
    printf("uv.ch=%c\n",uv.ch);
    uv.y=18;
    printf("uv.y=%d\n",uv.y);
    printf("uv.ch=%c\n",uv.ch);
    printf("uv.x=%d\n",uv.x);

}
