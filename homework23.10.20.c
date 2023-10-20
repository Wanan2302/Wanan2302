#include <stdio.h>

int main(void)
{
    int age=0;

    printf("请输入年龄（2-6）：");
    scanf("%d",&age);

    switch (age) {
        case 2 : puts("Lower class");      break;
        case 3 : puts("Lower class");      break;
        case 4 : puts("Middle class");      break;
        case 5 : puts("Higher class");      break;
        case 6 : puts("Higher class");      break;
        default : puts("您输入有误！");     break;
    }

    return 0;
}