#include<stdio.h>
#include<string.h>

 change(char *strfist, char *strlast)//数组传值（传地址）

{
    int i, j ;

    i = 0;

    j = strlen(strfist) - 1;  //去掉后面的“/0”,取最后一位

    while(strfist[i] == ' ')
    {
           ++i;               //第几位开始不是空格
    }


    while(strfist[j] == ' ')
    {
        --j;                  //后面开始为零的位
    }
    strncpy(strlast, strfist + i ,strlen(strfist));  //从fist的第i位开始到最后赋值给last

   strlast[j - i + 1] = '\0';  //去除后面的空格
}
  void main()
{
    int a,b;
      char *strfist[20];
      printf("请输入待转换的字符串：\n");
      gets(strfist);
    char strlast[20];
     change(strfist, strlast);
     a=strlen(strfist);
     b=strlen(strlast);
     printf("原字符串的长度为：%d\n",a);
     printf("转换后的字符串为：%s\n",strlast);

    printf("转换后的字符串长度为：%d",b);


}

