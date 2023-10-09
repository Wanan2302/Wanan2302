//长方形
#include <stdio.h>

int main (void)
{
    int n1=0,n2=0;
    int i=0,j=0;

    puts ("让我们来画一个长方形。");
    printf ("一边：");    scanf ("%d",&n1);
    printf ("另一边：");    scanf ("%d",&n2);

    if (n1>=n2) {
        for (i=1;i<=n2;i++) {
            for (j=1;j<=n1;j++) {
                putchar ('*');
            }
            putchar ('\n');
        }
    }

    else {
        for (i=1;i<=n1;i++) {
            for (j=1;j<=n2;j++) {
                putchar ('*');
            }
            putchar ('\n');
        }
    }

    return 0;
}