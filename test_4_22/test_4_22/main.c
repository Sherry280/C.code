#define _CRT_SECURE_NO_WARNINGS 1

#include"test.h"


static void Menu(){
	printf("############################\n");
	printf("##  欢迎来到我的扫雷游戏  ##\n");
	printf("############################\n");
	printf("##### 1.Play    2.Exit######\n");
	printf("############################\n");
	printf("Please Select:");

}


int main()
{
	int quit = 0;
	do{
		int select = 0;
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("当前游戏结束，要不要再来一把？\n");
			break;
		case 2:
			quit = 1;
			printf(" 再见....欢迎下次来玩：\n");
			break;
		default:
			printf("选择错误，请重新输入...\n");
			break;
		}
	} while (!quit);
	system("pause");
	return 0;
}