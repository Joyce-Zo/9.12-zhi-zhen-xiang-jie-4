#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void (   *signal( int, void(*)(int) )  )   (int);
////		 函数，参数是int ,和函数指针void(*)(int)，其指向的函数参数是int，返回void
//	//	返回类型又是指针函数，参数是int , 返回类型是void
//
////	简化：
//typedef unsigned int unit;
//
////  同理：
////理论上 typedef void(*)(int) pfun_t;	- err
////			定义  类型			名字
//// 实际：
//typedef void(*pfun_t)(int);
////			 名字放在*后
//pfun_t signal(int, pfun_t);
//// 两句合起来才是该函数的typedef

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
//				 地址找到函数，直接调用，三个都可以
//					函数名 即是 地址
//	/*printf("%d ", (**pa)(a, b));  多余
//	printf("%d ", (***pa)(a, b));*/
//	printf("%d ", *pa(a, b));
//				  pa先调用函数，结果* 解引用，完全错误
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
//	int* arr[5];// 指针数组
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	//	 pa[]是数组，剩下int(*)(int,int)是类型，
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