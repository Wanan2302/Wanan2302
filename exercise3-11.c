#include <stdio.h>

int main (void)
{
    int n1,n2,n3;

    printf ("请输入两个整数。\n");
    printf ("整数A：");    scanf ("%d",&n1);
    printf ("整数B：");    scanf ("%d",&n2);

    if (n1>n2) {
        n3=n1-n2;
    } else {
        n3=n2-n1;
    }
    
    if (n3<=10)
        printf ("它们的差小于等于10。\n");
    else 
        printf ("它们的差大于等于11。\n");

    return 0;
}