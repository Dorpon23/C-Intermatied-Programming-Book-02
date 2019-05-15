#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my_file0.txt";
    fp=fopen(filename,"r+");
    fprintf(fp ,"This is a file created by my program!");
    fprintf(fp, "I am so happy.\n");
    fclose(fp);
    fp=fopen(filename,"r+");
    fprintf(fp,"second line\n");
}
