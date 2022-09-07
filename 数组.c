#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int broad[3][3] = { {1,1,0 },{1,0,1},{0,0,0} };
	int no0 = 0;
	int no1 = 0;

	//判断行
	for (int i = 0; i < 3; i++)
	{
		no1 = 0, no0 = 0;
		for (int j = 0; j < 3; j++)
		{
			if (broad[i][j] == 1)
			{
				no1 += 1;
			}
			else
			{
				no0 += 1;
			}
		}
		if (no1 == 3)
		{
			printf("x赢");
		}
		else if (no0 == 3)
		{
			printf("y赢");
		}
		else
		{
			printf("第%d排没有赢家", i+1);
		}
		
	}

	//判断列
	for (int i = 0; i < 3; i++)
	{
		no1 = 0, no0 = 0;
		for (int j = 0; j < 3; j++)
		{
			if (broad[j][i] == 1)
			{
				no1 += 1;
			}
			else
			{
				no0 += 1;
			}
		}
		if (no1 == 3)
		{
			printf("x赢");
		}
		else if (no0 == 3)
		{
			printf("y赢");
		}
		else
		{
			printf("第%d列没有赢家", i + 1);
		}

	}
}