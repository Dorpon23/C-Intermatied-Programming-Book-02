#include<stdio.h>
int main()
{
    FILE *fp;
    char Filename[]="my_file3.txt";
    fp=fopen(Filename,"w");
    fprintf(fp ,"This is a file created by my program!");
    fprintf(fp, "I am so happy.\n");
    fclose(fp);
    fp=fopen(Filename,"w+");
    fprintf(fp,"second line\n");
    return 0;
}

