#include<stdio.h>
int main()
{
    FILE *fp_in, *fp2_in,  *fp3_in, *fp_out;
    char *input_file= "bangla.txt";
    char *input2_file= "math.txt";
    char *input3_file= "english.txt";
    char *output_file="out.txt";

    int st1,num1,st2,num2,st3,num3,st4,num4,st5,num5,st6,num6,st7,num7,st8,num8,st9,num9,st10,num10,num1b,
    num2b,num3b,num4b,num5b,num6b,num7b,num8b,num9b,num10b,num1c,num2c,num3c,num4c,num5c,num6c,num7c,
    num8c,num9c,num10c,avg1,avg2,avg3,avg4,avg5,avg6,avg7,avg8,avg9,avg10;
    fp_in= fopen(input_file,"r");
   fp2_in= fopen(input2_file,"r");
   fp3_in= fopen(input3_file,"r");
    fp_out= fopen(output_file,"w");


   fscanf(fp_in, "%d", &st1);
    fscanf(fp_in, "%d", &num1);
    fscanf(fp_in,"%d", &st2);
       fscanf(fp_in,"%d", &num2);
        fscanf(fp_in,"%d", &st3);
            fscanf(fp_in,"%d", &num3);
            fscanf(fp_in,"%d", &st4);
          fscanf(fp_in,"%d", &num4);
   fscanf(fp_in, "%d", &st5);
        fscanf(fp_in, "%d", &num5);
    fscanf(fp_in,"%d", &st6);
        fscanf(fp_in,"%d", &num6);
        fscanf(fp_in,"%d", &st7);
        fscanf(fp_in,"%d", &num7);
            fscanf(fp_in,"%d", &st8);
                    fscanf(fp_in,"%d", &num8);
   fscanf(fp_in, "%d", &st9);
     fscanf(fp_in, "%d", &num9);
    fscanf(fp_in,"%d", &st10);
               fscanf(fp_in,"%d", &num10);
fscanf(fp2_in, "%d", &st1);
    fscanf(fp2_in, "%d", &num1b);
    fscanf(fp2_in,"%d", &st2);
       fscanf(fp2_in,"%d", &num2b);
        fscanf(fp2_in,"%d", &st3);
            fscanf(fp2_in,"%d", &num3b);
            fscanf(fp2_in,"%d", &st4);
          fscanf(fp2_in,"%d", &num4b);
   fscanf(fp2_in, "%d", &st5);
        fscanf(fp2_in, "%d", &num5b);
    fscanf(fp2_in,"%d", &st6);
        fscanf(fp2_in,"%d", &num6b);
        fscanf(fp2_in,"%d", &st7);
        fscanf(fp2_in,"%d", &num7b);
            fscanf(fp2_in,"%d", &st8);
                    fscanf(fp2_in,"%d", &num8b);
   fscanf(fp2_in, "%d", &st9);
     fscanf(fp2_in, "%d", &num9b);
    fscanf(fp2_in,"%d", &st10);
               fscanf(fp2_in,"%d", &num10b);
fscanf(fp3_in, "%d", &st1);
    fscanf(fp3_in, "%d", &num1c);
    fscanf(fp3_in,"%d", &st2);
       fscanf(fp3_in,"%d", &num2c);
        fscanf(fp3_in,"%d", &st3);
            fscanf(fp3_in,"%d", &num3c);
            fscanf(fp3_in,"%d", &st4);
          fscanf(fp3_in,"%d", &num4c);
   fscanf(fp3_in, "%d", &st5);
        fscanf(fp3_in, "%d", &num5c);
    fscanf(fp3_in,"%d", &st6);
        fscanf(fp3_in,"%d", &num6c);
        fscanf(fp3_in,"%d", &st7);
        fscanf(fp3_in,"%d", &num7c);
            fscanf(fp3_in,"%d", &st8);
                    fscanf(fp3_in,"%d", &num8c);
   fscanf(fp3_in, "%d", &st9);
     fscanf(fp3_in, "%d", &num9c);
    fscanf(fp3_in,"%d", &st10);
               fscanf(fp3_in,"%d", &num10c);


avg1= (num1+num1b+num1c)/3;
avg2= (num2+num2b+num2c)/3;
avg3= (num3+num3b+num3c)/3;
avg4= (num4+num4b+num4c)/3;
avg5= (num5+num5b+num5c)/3;
avg6= (num6+num6b+num6c)/3 ;
avg7= (num7+num7b+num7c)/3;
avg8= (num8+num8b+num8c)/3;
avg9= (num9+num9b+num9c)/3;
avg10= (num10+num10b+num10c)/3;

    fprintf(fp_out,"%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",st1,avg1,st2,avg2,st3,avg3,st4,avg4,st5,avg5,st6,avg6,st7,avg7,st8,avg8,st9,avg9,st10,avg10);
    fclose(fp_in);

    fclose(fp_in);

    fclose(fp_in);
    fclose(fp2_in);
    fclose(fp3_in);
    fclose(fp_out);


    return 0;


}

