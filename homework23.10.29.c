#include <stdio.h>

int main(void)
{
    int x=0;
    int a=0,b=0,c=0;

    scanf("%d",&x);

    c=x%10;
    b=x/10%10;
    a=x/100;

    if (a*a*a+b*b*b+c*c*c==x) {
        printf("%d是水仙花数！",x);
    } else {
        printf("该三位数不是水仙花数！");
    }

    return 0;
}