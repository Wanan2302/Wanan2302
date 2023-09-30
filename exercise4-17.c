#include <stdio.h>

int main (void)
{
    int no=0;
    int i=0;

    printf ("n的值：");
    scanf ("%d",&no);

    for (i=1;i<=no;i++) {
        printf ("%d的二次方是%d\n",i,i*i);
    }

    return 0;
}