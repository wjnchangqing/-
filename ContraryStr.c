#include<stdio.h>
#include<string.h>
void main()
{
    printf("���������ת���ַ���:");
    char str[20];
    gets(str);
    int i;
   printf("��ת����ַ���Ϊ:");
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
