#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		int a = b;
//		int b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		int a = c;
//		int c = tmp;
//    }
//	if (b < c)
//	{
//		int tmp = b;
//		int b = c;
//		int c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}
//写一个打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//编写代码实现，模拟用户登录情景，并且只能登录三次
//只允许输入三次密码，如果密码正确则提示登陆成功，如果三次输入错误，则退出程序
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#define SIZE 128
#define TRY_COUNT 3
#pragma warning(disable:4996)
#define DEFAULT_NAME  "admin"
#define DEFAULT_PSD  "bitnb"
void Menu()
{
	printf("#######################\n");
	printf("###1.Guess    2.Quit###\n");
	printf("#######################\n");
	printf("Please Select>");
	
}
void Game()
{
	printf(".....游戏开始.......");
	srand((unsigned int)time(NULL));
	int data = rand() % 100 + 1;
	printf("规则：计算机会随机生成[1,100]之间的数字，你要能猜出来，快来试试吧！\n");
	for (;;)
	{
		printf("Guess:");
		int x = 0;
		scanf("%d", &x);
		if (x > data)
		{
			printf("你猜大了！\n");
		}
		else if (x < data)
		{
		printf("你猜小了！\n");
		}
		else
	{
		printf("恭喜你，猜对了，数字是：%d\n", data);
			break;
		}
	}
	printf("......游戏结束......\n");
}
//编写程序数一下1-100中所有整数中出现9的个数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{			
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}














