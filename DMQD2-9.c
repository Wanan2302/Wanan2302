//读取两个整数并用浮点数显示出它们平均值
#include <stdio.h>
int main (void)
{
    int n1=0;
    int n2=0;
    double n3=0;
    
    puts ("请输入两个整数。");
    printf ("整数a：");    scanf ("%d",&n1);
    printf ("整数b：");    scanf ("%d",&n2);
    
    n3=(n1+n2)/2.0;

    printf ("它们的平均值是%f。\n",n3);

    return 0;
}