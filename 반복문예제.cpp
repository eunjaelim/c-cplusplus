#include <iostream>

int main()
{
	int score[10][5] = { {79,67,38,0,0},{87,98,34,0,0},{87,44,38,0,0},  // ����,��� ����
		{78,32,65,0,0},{76,42,76,0,0},{67,23,65,0,0},{76,65,43,0,0},
		{34,56,76,0,0},{89,87,98,0,0},{54,54,23,0,0}};

	double ave[10] = { 0, }; // ����� �� 0���� �ʱ�ȭ
	int i, j;

	for (i = 0; i < 10; i++)
	{
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		ave[i] = score[i][3] / 3.0;
		score[i][4] = 1; // ��� �ʱ�ȭ
	}

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++) // ���� ���� �л�
		{
			if (score[i][3] < score[j][3])
				score[i][4]++;
			else if (score[i][3] > score[j][3])
				score[j][4]++;
			else
				;
		}
	}
	std::cout << "��� ����1 ����2 ����3 ���� ���" << std::endl;

	for (i = 0; i < 10; i++)
	{
		std::cout << score[i][4] << "     ";
		for (j = 0; j < 4; j++)
		{
			std::cout << score[i][j] << "    ";
			
		}
		std::cout << ave[i] << "    ";
		std::cout << std::endl;
	}

}
