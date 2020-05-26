#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
int DrinkSoda(int money)
{
	int total = money;
	int empty = money;
	while (empty >= 2){
		total += empty/2;
		empty = empty / 2 + empty % 2;
	}
	printf("剩余瓶子：%d\n", empty);
	return total;
}



char *MyStrcpy(char *dst, const char *src)
{
	assert(dst);
	assert(src);
	char *ret = dst;

	while (*src != '\0'){
		*dst = *src;
		dst++, src++;

	}
	*dst = *src;
	return ret;


}


void Switch(int *arr, int num)
{
	int *start = arr;
	int *end = arr + num - 1;
	while (start < end&&(*start&1)){
		start++;

	}while (start < end && (*end & 1)){
		end--;
	}
	if (start < end){
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++, end--;
	}
}


//模拟实现库函数strcpy
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Switch(arr, num);

	
	
	
	
	
	
	
	
	
	
	/*
	const char *src = "hello";
	char dst[64];
	MyStrcpy(dst, src);
	printf("%s\n", dst);*/

	/*printf("请输入你有多少钱：");
	int money = 0;
	scanf("%d", &money);
	int total = DrinkSoda(money);
	printf("total:%d\n", total);*/
	system("pause");
	return 0;
}