//同4-6，我这个思路很天才
#include <stdio.h> 

int main (void)
{
    int no=0;
    int i=2;

    printf ("请输入一个整数：");
    scanf ("%d",&no);

    while (i<=no) {
        i=i*2;
        printf ("%d ",i/2);
    }
    printf ("\n");

    return 0;
}