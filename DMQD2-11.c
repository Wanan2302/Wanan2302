#include <stdio.h>
int main (void)
{
    int a=0;
    int b=0;
    int c=0;

    puts ("请输入三个整数。");
    printf ("整数a：");    scanf ("%d",&a);
    printf ("整数b：");    scanf ("%d",&b);
    printf ("整数c：");    scanf ("%d",&c);

    printf ("它们的合计值是%d。\n",a+b+c);
    printf ("它们的平均值是%f。\n",(a+b+c)/3.0);

    return 0;
}