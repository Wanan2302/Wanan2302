//修改DMQD5-5   54321
#include <stdio.h>

int main(void)
{
    int i=0;
    int v[5]={5,4,3,2,1};

    for (i=0;i<5;i++) {                 //遍历这个数组
        printf("v[%d]=%d\n",i,v[i]);
    }

    return 0;
}