#include <iostream>

int main()
{
	int score[10][5] = { {79,67,38,0,0},{87,98,34,0,0},{87,44,38,0,0},  // 총점,등수 공란
		{78,32,65,0,0},{76,42,76,0,0},{67,23,65,0,0},{76,65,43,0,0},
		{34,56,76,0,0},{89,87,98,0,0},{54,54,23,0,0}};

	double ave[10] = { 0, }; // 평균의 값 0으로 초기화
	int i, j;

	for (i = 0; i < 10; i++)
	{
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		ave[i] = score[i][3] / 3.0;
		score[i][4] = 1; // 등수 초기화
	}

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++) // 비교할 다음 학생
		{
			if (score[i][3] < score[j][3])
				score[i][4]++;
			else if (score[i][3] > score[j][3])
				score[j][4]++;
			else
				;
		}
	}
	std::cout << "등수 점수1 점수2 점수3 총점 평균" << std::endl;

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
