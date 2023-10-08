//画一个长方形
#include <stdio.h>

int main (void)
{
    int i=0, j=0;
    int width=0, length=0;

    puts ("让我们来画一个长方形。");
    printf ("宽：");    scanf ("%d",&width);
    printf ("长：");    scanf ("%d",&length);

    for (i=1;i<=width;i++) {
        for (j=1;j<=length;j++) {
            putchar ('*');
        }
        putchar ('\n');
    }

    return 0;
}