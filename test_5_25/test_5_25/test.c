#define _CRT_SECURE_NO_WARNINGS 1
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3��
//��153��һ����ˮ�ɻ�������
#include<stdio.h>
#include<math.h>
#include<string.h>
int IsNarcissus(int x)
{
	int old_data = x;
	int count = Count(x);
	int sum = 0;
	while (x){
		int temp = x % 10;
		sum += (int)pow(temp, count);
		x /= 10;
	}
	return sum == old_data;
}
int Count(int x)
{
	int count = 0;
	while (x){
		x /= 10;
		count++;
	}
	return count;
}
void Show(int n)
{
	int i = 0;
	for (; i < n; i++){
		int j = 0;
		for (; j < n - 1 - i; j++){
			printf(" ");
		}
		for (j=0; j < 2*i+1; j++){
			printf("*");
		
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++){
		int j = 0;
		for (; j <= i; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * n - 3 - 2 * i; j++){
			printf("*");
		}
		printf("\n");
	}



}

int main()
{
	Show(8);








	/*int i = 0;
	for (; i < 100000; i++){
		if (IsNarcissus(i)){
			printf("%d", i);
		}
		printf("\n");
	}*/
	system("pause");
	return 0;
}














