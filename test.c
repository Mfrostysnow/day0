#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
char board[ROW][COL];
//int main()
//{
//	int result;
//	srand((unsigned int)time(NULL));
//	int input;
//	do 
//	{
//		printf("**********************************\n");
//		printf("*****    1.游戏     2.退出   *****\n");
//		printf("**********************************\n");
//		printf("请输入：");
//		scanf_s("%d", &input);
//		if (input == 1) 
//		{
//			printf("五子棋(简易版)\n");
//			printf("只能判定横竖，不能斜线判定，并且电脑设置的是随机数，多少有点人工智障。\n你可以尝试让电脑赢，这会增加可玩性。\n想要了解改进版，可以先V我50，你会第一时间收到的。【doge】\n");
//			printf("微信号：M2519533391\n");
//			printf("玩家符号：*\n电脑符号：#\n");
//			remakeboard(board, ROW, COL);
//			doboard(board, ROW, COL);
//			while (1) 
//			{
//				playermove(board, ROW, COL);
//				doboard(board, ROW, COL);
//				result = iswin(board, ROW, COL);
//				if (result == 1) 
//				{
//					printf("------------------------------\n");
//					printf("-----------恭喜获胜！---------\n");
//					printf("------------------------------\n");
//					break;
//				}
//				if (result == 2) 
//				{
//					printf("-------------平局-------------\n");
//					break;
//				}
//				computermove(board, ROW, COL);
//				doboard(board, ROW, COL);
//				result = iswin(board, ROW, COL);
//				if (result == 3)
//				{
//					printf("----------再接再厉！----------\n");
//					break;
//				}
//				if (result == 2)
//				{
//					printf("-------------平局-------------\n");
//					break;
//				}
//			}
//
//		}
//		else if (input == 2)
//			printf("-------------点了你不玩？ 6 -------------\n");
//
//		else 
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input != 2);
//	system("pause");
//}