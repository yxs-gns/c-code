#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//是素数返回1；不是素数返回0
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
	//打印100-200之间的素数
	int i =0;
	for(i=100;i<=200;i++)
	{
		//判断i是否是素数
		if(is_prime(i)==1)
			printf("%d ",i);
	}
	system ("pause");
	return 0;
}
////当实参传给形参的时候
////形参其实是实参的一份临时拷贝
////对形参的修改是不会改变实参的
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
//	Swap(&a,&b);//调用Swap 函数
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//	system("pause");
//}