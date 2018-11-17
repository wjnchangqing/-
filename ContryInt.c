#include <stdio.h>
int main()
{
    int a,b;
      b=0;
    printf("请输入待转换的整数：");
    scanf("%d",&a);
        while(a!=0)
        {
            b=b*10+a%10;
            a/=10;
        }
        printf("转换后的整数为:%d\n",b);
    return 0;
}
