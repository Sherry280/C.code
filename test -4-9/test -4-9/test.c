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
//дһ����ӡ1-100֮������3�ı���������
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
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//ֻ���������������룬���������ȷ����ʾ��½�ɹ��������������������˳�����
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
	printf(".....��Ϸ��ʼ.......");
	srand((unsigned int)time(NULL));
	int data = rand() % 100 + 1;
	printf("���򣺼�������������[1,100]֮������֣���Ҫ�ܲ³������������԰ɣ�\n");
	for (;;)
	{
		printf("Guess:");
		int x = 0;
		scanf("%d", &x);
		if (x > data)
		{
			printf("��´��ˣ�\n");
		}
		else if (x < data)
		{
		printf("���С�ˣ�\n");
		}
		else
	{
		printf("��ϲ�㣬�¶��ˣ������ǣ�%d\n", data);
			break;
		}
	}
	printf("......��Ϸ����......\n");
}
//��д������һ��1-100�����������г���9�ĸ���
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














