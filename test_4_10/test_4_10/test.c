#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			 right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			 left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到！\n");
//
//	}
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#define SIZE 5
//int Max(int arr[], int num)
//{
//	int i = 0;
//	int max = arr[0];
//	for (; i < num; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[SIZE] = { 0 };
//	int i = 0;
//	for (; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = Max(arr, SIZE);
//	printf("max=%d\n", max);
//	system("pause");
//}

//求两个数中的较大值
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
//int Max(int x, int y)
//{
//	int max = 0;
//	return max = (x > y ? x : y);
//}














