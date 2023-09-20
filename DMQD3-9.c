//判断输入的整数的符号
#include <stdio.h>

int main (void)
{
    int no=0;

    printf ("输入一个整数：");    scanf ("%d",&no);
    
    if (no>0)
       puts ("该整数为正数。");
    else if (no<0)
       puts ("该整数为负数。");
    else
       puts ("该整数为0。");

    return 0;
}

//课本更好，思路清晰，先判断是不是0，再做大小比较