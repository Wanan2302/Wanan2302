#include <stdio.h>

int main (void)
{
    int month;

    printf ("请输入月份：");    
    scanf ("%d",&month);

    switch (month) {
        case 3  : puts ("3月是春天。");    break;
        case 4  : puts ("4月是春天。");    break;
        case 5  : puts ("5月是春天。");    break;
        case 6  : puts ("6月是夏天。");    break;
        case 7  : puts ("7月是夏天。");    break;
        case 8  : puts ("8月是夏天。");    break;
        case 9  : puts ("9月是秋天。");    break;
        case 10 : puts ("10月是秋天。");    break;
        case 11 : puts ("11月是秋天。");    break;
        case 12 : puts ("12月是冬天。");    break;
        case 1  : puts ("1月是冬天。");    break;
        case 2  : puts ("2月是冬天。");    break;
        default : printf ("%d月不存在！\n",month); break;
    }

    return 0;
}