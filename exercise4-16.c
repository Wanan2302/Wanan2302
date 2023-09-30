#include <stdio.h>

int main (void)
{
    int no=0;
    int i=0;

    printf ("整数值：");
    scanf ("%d",&no);

    for (i=1;i<=no;i+=2) {
        printf ("%d ",i);
    }
    putchar ('\n');

    return 0;
}