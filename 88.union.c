#include<stdio.h>
struct s
{
    char ch;
    int n;
    char str[16];
};
union u
{
    char ch;
    int n;
    char str[16];
};
int main()
{
    struct s sv;
    union u uv;
    int struct_size,union_size;
    struct_size=sizeof(sv);
    union_size=sizeof(uv);
    printf("Structure variable took size %d bytes:\n",struct_size);
    printf("union variable took size %d bytes:\n",union_size);
}
