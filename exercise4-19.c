#include <stdio.h>

int main (void)
{
    int no=0;
    int i=0;
    int n1=0;

    printf ("整数值：");
    scanf ("%d",&no);

    for (i=1;i<=no;i++) {
        if (no%i==0) {
            printf ("%d",i);
            n1++;
            putchar ('\n');
        }       
    }
    printf ("约数有%d个。\n",n1);

    return 0;
}