#include<stdio.h>
int main()
{
    FILE *fp_in,*fp_in1,*fp_in2,*fp_out;
    char *input_file="math.txt";
    char *input_file1="bangla.txt";
    char *input_file2="english.txt";
    char *output_file="average.txt";
    char line[80],line1[80],line2[80];
    int sum,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9;
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    int num11,num12,num13,num14,num15,num16,num17,num18,num19,num20;
    int num21,num22,num23,num24,num25,num26,num27,num28,num29,num30;
    int num31,num32,num33,num34,num35,num36,num37,num38,num39,num40;
    int num41,num42,num43,num44,num45,num46,num47,num48,num49,num50;
    int num51,num52,num53,num54,num55,num56,num57,num58,num59,num60;
    int Roll,Mark;
    fp_in=fopen(input_file,"r");
    fp_in1=fopen(input_file1,"r");
    fp_in2=fopen(input_file2,"r");
    fgets(line,80,fp_in);
    fgets(line1,80,fp_in1);
    fgets(line2,80,fp_in2);
    printf("Line: %s\n",line);
    printf("Line1: %s\n",line1);
    printf("Line2: %s\n",line2);
    sscanf(line,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16,&num17,&num18,&num19,&num20);
    sscanf(line1,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num21,&num22,&num23,&num24,&num25,&num26,&num27,&num28,&num29,&num30,&num31,&num32,&num33,&num34,&num35,&num36,&num37,&num38,&num39,&num40);
    sscanf(line2,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num41,&num42,&num43,&num44,&num45,&num46,&num47,&num48,&num49,&num50,&num51,&num52,&num53,&num54,&num55,&num56,&num57,&num58,&num59,&num60);
    sum=(num2+num22+num42)/3;
    sum1=(num4+num24+num44)/3;
    sum2=(num6+num26+num46)/3;
    sum3=(num8+num28+num48)/3;
    sum4=(num10+num30+num50)/3;
    sum5=(num12+num32+num52)/3;
    sum6=(num14+num34+num54)/3;
    sum7=(num16+num36+num56)/3;
    sum8=(num18+num38+num58)/3;
    sum9=(num20+num40+num60)/3;
    //printf("ROLL%d\t == Mark%d\t\n",Roll,Mark);
    printf("%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n%d\t == %d\n",num1,sum,num3,sum1,num5,sum2,num7,sum3,num9,sum4,num11,sum5,num13,sum6,num15,sum7,num17,sum8,num19,sum9);
    fclose(fp_in);
    fclose(fp_in1);
    fclose(fp_in2);
}
