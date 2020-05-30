 #define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);
	while (*str){
		count++;
		str++;
	}
	return count;
}

void ShowYang()
{
	int arr[10][10];
	int i = 0;
	int j = 0;
	for (; i < 10; i++){
		for (j = 0; j <= i; j++){
			arr[i][j] = 1;
		}
	}
}
//Ñî»ÔÈý½Ç
int main()
{
	ShowYang();



	//ËÀÑ­»·
	/*int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
*/

	/*const char *p = "abcdefg";
	int len = my_strlen(p);
	printf("len=%d\n", len);*/
	system("pause");
	return 0;
}