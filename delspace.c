#include<stdio.h>
#include<string.h>

 change(char *strfist, char *strlast)//���鴫ֵ������ַ��

{
    int i, j ;

    i = 0;

    j = strlen(strfist) - 1;  //ȥ������ġ�/0��,ȡ���һλ

    while(strfist[i] == ' ')
    {
           ++i;               //�ڼ�λ��ʼ���ǿո�
    }


    while(strfist[j] == ' ')
    {
        --j;                  //���濪ʼΪ���λ
    }
    strncpy(strlast, strfist + i ,strlen(strfist));  //��fist�ĵ�iλ��ʼ�����ֵ��last

   strlast[j - i + 1] = '\0';  //ȥ������Ŀո�
}
  void main()
{
    int a,b;
      char *strfist[20];
      printf("�������ת�����ַ�����\n");
      gets(strfist);
    char strlast[20];
     change(strfist, strlast);
     a=strlen(strfist);
     b=strlen(strlast);
     printf("ԭ�ַ����ĳ���Ϊ��%d\n",a);
     printf("ת������ַ���Ϊ��%s\n",strlast);

    printf("ת������ַ�������Ϊ��%d",b);


}

