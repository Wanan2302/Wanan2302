#include <stdio.h>
int main (void)
{
    int n1=0;

    printf ("请输入您的身高：");    scanf ("%d",&n1);

    printf ("您的标准体重是%.1f公斤。\n",(n1-100)*0.9);

    return 0;
}


//也可以定义double型n2来表示