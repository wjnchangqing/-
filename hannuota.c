#include<stdio.h>
//�ƶ�����
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
        move(a,c);                  //��n��ֱ��a->c
        hannuota(n-1,b,a,c);        //��n-1���b�ᵽc
    }
}
int main()
{
    int n;
    printf("��������������");
    scanf("%d", &n); //�ж��ٲ���
    printf("�ƶ�����Ϊ��\n");
    hannuota(n,'A','B','C');
    return 0;
}
