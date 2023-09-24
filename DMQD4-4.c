//不停输入整数，显示其和及平均值
//使用复合赋值运算符和后置递减运算符
#include <stdio.h>

int main (void)
{
    int sum=0;
    int cnt=0;
    int retry=0;

    do {
        int t=0;

        printf ("请输入一个整数：");
        scanf ("%d",&t);

        sum+=t;
        cnt++;

        printf ("是否继续？<是···0/否···9>");
        scanf ("%d",&retry);
    } while (retry==0);

    printf ("它们的和是%d，它们的平均值是%.2f。\n",sum,(double) sum/cnt);

    return 0;
}