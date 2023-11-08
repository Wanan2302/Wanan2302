#include <stdio.h>
int main(void)
{
    int i=0;
    int sum=0;
    int term=0;

    for (i=1;i<=100;i++) {
        if (i%3==0&&i%5==1) {
            sum=sum+i;
        } 
    }

    printf("sum=%d\n",sum);

    return 0;
}