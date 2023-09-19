//读取两个整数并用实数显示出它们的平均值（类型转换）
#include <stdio.h>
int main (void)
{
    int n1=0;
    int n2=0;

    puts ("请输入两个整数。");
    printf ("整数a：");    scanf ("%d",&n1);
    printf ("整数b：");    scanf ("%d",&n2);

    printf ("它们的平均值是%f。\n",(double)(n1+n2)/2);

    return 0;
}