#include<stdio.h>
#include<string.h>
void main()
{
    printf("请输入待反转的字符串:");
    char str[20];
    gets(str);
    int i;
   printf("反转后的字符串为:");
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
