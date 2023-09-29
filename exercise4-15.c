#include <stdio.h>

int main (void)
{
    int n1,n2,n3;
    int num=0;
    int wei=0;
    int i=0;

    printf ("开始数值（cm）：");    scanf ("%d",&n1);
    printf ("结束数值（cm）：");    scanf ("%d",&n2);
    printf ("间隔数值（cm）：");    scanf ("%d",&n3);

    num=(n2-n1)/n3+1;

    for (i=1;i<=num;i++) {
        printf ("%dcm    %.2fkg\n",n1,(double) (n1-100)*0.9);
        n1+=n3;
    }

    return 0;
}