#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//����������1��������������0
int is_prime(int n)
{
	int j=0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)
			return 0;
	}
    return 1;
}
int main ()
{
	//��ӡ100-200֮�������
	int i =0;
	for(i=100;i<=200;i++)
	{
		//�ж�i�Ƿ�������
		if(is_prime(i)==1)
			printf("%d ",i);
	}
	system ("pause");
	return 0;
}
////��ʵ�δ����βε�ʱ��
////�β���ʵ��ʵ�ε�һ����ʱ����
////���βε��޸��ǲ���ı�ʵ�ε�
//void Swap (int* pa,int* pb)
//{
//	int tmp=0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=*pa;
//}
//int main()
//{
//	int a=10;
//	int b=30;
//	printf("a=%d b=%d\n",a,b);
//	Swap(&a,&b);//����Swap ����
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//	system("pause");
//}