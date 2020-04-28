#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
//结构体
//struct Stu{
//	char name[32];
//	char sex;
//	int age;
//	char telephone[16];
//
//};
//typedef struct Stu{
//	char name[12];
//	char sex;
//	char age;
//
//}stu_t;
//void Show(stu_t *s){
//	printf("%s\n", s->name);
//	printf("%s\n", s->sex);
//	printf("%s\n", s->age);
//}
int DifferOne(int x, int y)
{
	return CountOne(x^y);
}
int CountOne(int n)
{
	int count = 0;
	while (n){
		n &= (n - 1);
		count++;
		return count;
	}
}
		int main(){
			int m = 1999;
			int n = 2299;
			int count = DifferOne(m, n);
			printf("count:%d\n", count);
			system("pause");
			return 0;

			/*struct Stu student1 = { "张三", 18, 'm' };
			struct Stu student2 = { "李四",33,'m'};
			Show(&student2);
			printf("%p\n", &student2);*/
			/*printf("name:%s\n", student1.name);
			stu_t *p = &student1;
			printf("name:%s\n", p->name);
			printf("name:%s\n", (*p).name);*/
			/*int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/
			/*printf("%d\n", &a[0]);*/
			//int i = 0, a = 0, b = 2, c = 3, d = 4;
			////i = a++&&++b&&d++;
			//i = a++ || ++b || d++;
			//printf("a=%d\nb=%d\nc=%d\nd=%d\ni=%d\n", a, b, c, d,i);
			/*int flag = 1;
			flag == 1 && printf("aaaa\n");
			flag == 0 || printf("aaa\n");*/
			////逻辑操作符
			//int a = 10;
			//int b = 20;
			//int c = 30;
			//if (a >= 10 && b <= 20 && c == 30){
			//	printf("true");
			//}
			//关系操作符
			//int a = 10;
			//int b = 20;
			//if (a == b){//不是等号
			//	printf("hello world!");
			//}

		}