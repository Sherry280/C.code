#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void BobbleSort(int *arr, int sz)
{
	int i = 0;
	for (; i < sz - 1; i++){
		int j = 0;
		int flag = 1;
		for (; j < sz - 1 - i; j++){
			if (arr[j]>arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (flag == 1){
			break;
		}
	}


	/*int i = 0;
	for (; i < sz; i++){
		printf("arr[%d]:%d\n", i, arr[i]);
	}*/

	//printf("%d\n", sizeof(arr));
}
void Show(int arr[], int sz)
{
	int i = 0;
	for (; i < sz; i++){
		printf("%d", arr[i]);
	}
	printf("\n");


}



int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);

	printf("%p\n", arr + 1);
	printf("%p\n", arr + 2);
	printf("%p\n", *(arr + 1));
	printf("%d\n", arr[0]);


	/*int arr[] = { 6, 4, 9, 8, 1, 0, 5, 3, 7, 9, 4, 2, 3, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Show(arr, sz);
	BobbleSort(arr, sz);
	Show(arr, sz);
*/

	//int arr[3][4] = {0 };
	//int i = 0;
	//for (; i < 3; i++){
	//	int j = 0;
	//	for (; j < 4; j++){
	//		arr[i][j] = i * 4 + j;
	//		/*printf("&arr[%d][%d]:%p\n", i, j, &arr[i][j]);*/
	//	}
	//}
	//for (i = 0; i < 3; i++){
	//	int j = 0;
	//	for (; j < 4; j++){
	//		printf("%d\n", arr[i][j]);
	//		printf("arr[%d][%d]\n", i, j);
	//	}
	//}

	system("pause");
	return 0;
}


