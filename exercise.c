//9.26号作业3-2
#include <stdio.h>

int main (void)
{
    int a,b,c,d,e,f,g;

    printf ("输入a：");    scanf ("%d",&a);
    printf ("输入b：");    scanf ("%d",&b);

    d=a/10;
    e=a%10;
    f=b/10;
    g=b%10;
    c=1000*g+100*d+10*f+1*e;

    printf ("新整数c=%d\n",c);

    return 0;
}