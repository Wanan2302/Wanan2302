//显示金字塔
#include <stdio.h>

int main (void)
{
    int no=0,i=0,j=0;

    puts ("让我们来画一个金字塔。");
    printf ("金字塔有几层：");
    scanf ("%d",&no);

    for (i=1;i<=no;i++) {
        for (j=no-1;j>=i;j--) {
            putchar (' ');
        }
        for (j=2;j<=2*i;j++) {
            putchar ('*');
        }
        putchar ('\n');
    }

    return 0;
}