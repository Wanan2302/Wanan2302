//等腰三角形（直角在左上方）
#include <stdio.h>

int main (void)
{
    int i=0,j=0,len=0;

    puts ("生成直角在左上角的等腰直角三角形。");
    printf ("短边：");
    scanf ("%d",&len);

    for (i=1;i<=len;i++) {
        for (j=len;j>=i;j--) {
            putchar ('*');
        }
        putchar ('\n');
    }

    return 0;
}