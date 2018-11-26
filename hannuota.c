#include<stdio.h>
//移动函数
void move(char a,char b)
{
    printf("%c->%c\n",a,b);
}
void hannuota(int n, char a, char b, char c)
{
    if(n==1)
    {
        move(a,c);
    }
    else
    {
        hannuota(n-1,a,c,b);
        move(a,c);                  //第n层直接a->c
        hannuota(n-1,b,a,c);        //将n-1层从b搬到c
    }
}
int main()
{
    int n;
    printf("请输入盘子数：");
    scanf("%d", &n); //有多少层塔
    printf("移动步骤为：\n");
    hannuota(n,'A','B','C');
    return 0;
}
