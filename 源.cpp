#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void (   *signal( int, void(*)(int) )  )   (int);
////		 ������������int ,�ͺ���ָ��void(*)(int)����ָ��ĺ���������int������void
//	//	������������ָ�뺯����������int , ����������void
//
////	�򻯣�
//typedef unsigned int unit;
//
////  ͬ��
////������ typedef void(*)(int) pfun_t;	- err
////			����  ����			����
//// ʵ�ʣ�
//typedef void(*pfun_t)(int);
////			 ���ַ���*��
//pfun_t signal(int, pfun_t);
//// ������������Ǹú�����typedef

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d ", (pa)(a, b));
//	printf("%d ", (*pa)(a, b));
//	printf("%d ", Add(a, b));
//				 ��ַ�ҵ�������ֱ�ӵ��ã�����������
//					������ ���� ��ַ
//	/*printf("%d ", (**pa)(a, b));  ����
//	printf("%d ", (***pa)(a, b));*/
//	printf("%d ", *pa(a, b));
//				  pa�ȵ��ú��������* �����ã���ȫ����
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int* arr[5];// ָ������
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	//	 pa[]�����飬ʣ��int(*)(int,int)�����ͣ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](a, b));
//	}
//	//printf("%d ", pa(a, b));
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
char* (*pf)(char*, const char*);

char*(*pfArr[4])(char*, const char*);