#include <stdio.h>
int main()
{
    int a,b;
      b=0;
    printf("�������ת����������");
    scanf("%d",&a);
        while(a!=0)
        {
            b=b*10+a%10;
            a/=10;
        }
        printf("ת���������Ϊ:%d\n",b);
    return 0;
}
