//按照原来的办法总会多输出一个偶数，我先减2，又多个0，所以初始化i=2！
#include <stdio.h>

int main (void)
{
    int no=0;
    int i=2;                    //这两步我好似一个天才                       
    
    printf ("请输入一个整数：");
    scanf ("%d",&no);

    while (i<=no) {
        i=i+2;
        printf ("%d ",i-2);     //这两步
    }
    printf ("\n");

    return 0;
}