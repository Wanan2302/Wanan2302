#include <stdio.h>
int main (void)
{
    int n1=0;
    int n2=0;

    printf ("请输入两个整数。\n");
    printf ("整数a：");    scanf ("%d",&n1);
    printf ("整数b：");    scanf ("%d",&n2);

    printf ("a是b的%f%%。\n",(double)n1*100/n2);

    return 0;
}