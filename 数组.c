#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int broad[3][3] = { {1,1,0 },{1,0,1},{0,0,0} };
	int no0 = 0;
	int no1 = 0;

	//�ж���
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
			printf("xӮ");
		}
		else if (no0 == 3)
		{
			printf("yӮ");
		}
		else
		{
			printf("��%d��û��Ӯ��", i+1);
		}
		
	}

	//�ж���
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
			printf("xӮ");
		}
		else if (no0 == 3)
		{
			printf("yӮ");
		}
		else
		{
			printf("��%d��û��Ӯ��", i + 1);
		}

	}
}