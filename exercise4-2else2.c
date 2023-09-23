//此为else的修改版
//这三个code弄了有一个小时
//成功了，还是值得的
//if套do我想出来的
#include <stdio.h>

int main (void)
{
    int n1=0;
    int n2=0;
    int num=1;
    int n3=0;
   
    printf ("请输入两个整数。\n");
    printf ("整数a：");    scanf ("%d",&n1);
    printf ("整数b：");    scanf ("%d",&n2);

    if (n1>n2) {
        do {
            num=num+1;
            n2=n2+1;
        } while (!(n2==n1));                    //运用了逻辑非运算符
        
        n3=(n1+n2+1-num)*num/2;                 //注意！n2的值经过循环已经变了
        
        printf ("大于等于%d小于等于%d的所有整数的和是%d。\n",n2+1-num,n1,n3);
    } else if (n1<n2) {
        do {
            num=num+1;
            n1=n1+1;
        } while (!(n1==n2));
        
        n3=(n1+1-num+n2)*num/2;
        
        printf ("大于等于%d小于等于%d的所有整数的和是%d。\n",n1+1-num,n2,n3);
    } else {
        int n3=n1+n2;
        
        printf ("大于等于%d小于等于%d的所有整数的和是%d。\n",n1,n2,n3);
    }

    return 0;                                     //3种情况，考虑周全
}