#include <stdio.h>

int main (void)
{
    int no=0;

    printf ("正整数：");
    scanf ("%d",&no);

    if (no>=1) {
    while (no-->0)
        putchar ('*');
    putchar ('\n');
    }

    else 

    return 0;
}