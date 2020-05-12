#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Reverse(char *str)
{
	if (NULL == str){
		return;
	}
	char *head = str;
	char *end = str + strlen(str) - 1;
	while (head < end){
		char temp = *head;
		*head = *end;
		*end = temp;
		*end--, *head++;
	}
}

int Sn(int a, int n)
{
	int sum = a;
	int i = 0;
	int sn = 0;
	for (; i < n; i++){
		sn = sn * 10 + a;
		sum += sn;
	}
	return sum;
}



//void Show(int *a, int n)
//{
//
//	int i = 0;
//	for (; i < n; i++){
//		printf("%d", *(a + i));
//	}
//	printf("\n");
//}

//void Show(int(*a)[5], int n)
//{
//	int i = 0;
//	for (; i < n; i++){
//		int j = 0;
//		for (; j < 5; j++){
//			printf("\n");
//		}
//		printf("\n");
//	}
//} 
int main()
{

	int a = 0;
	int n = 0;
	int sn = 0;
	printf("Please Enter Your a&&n:");
	scanf("%d%d", &a, &n);
	int result = Sn(a, n);



	/*char str[] = "abcd1234";
	printf("before:%s\n", str);
	Reverse(str);
	printf("after:%s\n", str);
	*/
	
	
	/*
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int num = sizeof(a) / sizeof(a[0]);
	Show(a, num);
*/
	/*int a[3][5];
	Show(a, 3);*/












	/*int(*arr)[5];
	int a[5];
	arr = &a;
	printf("&a[0]:%p\n", a);
	printf("&a     :%p\n", &a);
	printf("arr   :%p\n", arr);
	printf("arr+1  :%p\n", arr + 1);
	printf("&a[0]+1:%p\n", a+1);
	printf("&a+1    :%p\n", &a+1);*/
	
	
	/*
	int *arr[5];
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	char c = 'c';
	arr[0] = &c;*/
	/*int a = 10;
	int *p = &a;
	int **pp = &p;
	printf("before:%p,%p,%p,%p,%p,%p\n",a, p,pp,&a,&p,&pp);
	p = 15;
	printf("after:%p,%p,%p,%p,%p,%p\n", a, p, pp, &a, &p, &pp);*/


	system("pause");
	return 0;
}

