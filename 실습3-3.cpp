// ���࿡�� ���� �ݾ��� 1�� ������ ���� �޾��� �� ���� �� ���Աݾ���
// ����Ͽ� �������.
// �� ������ 2.5%, �ſ� ���Աݾ��� ���ݰ� ������ ������ ������ ����ݾ���
// 12�� ���� ������ �Ѵ�.
// ����ݾװ� ���Աݾ��� �� ������ ó���Ѵ�.

// ����ݾ� : ������
// �� ���Աݾ� : ������  ����+����  
// ���� : ������ ����ݾ� / 12 ������
// ���� : ������
// ������ : �������� 0.025



#include <iostream>

int LoanAmount;  // ����ݾ� 
int principal;  // ���� 
double Interest = 0.025; // ����
int MonthlyPaymentAmount; // �� ���Աݾ�


int main()
{
	std::cout << "����ݾ� �Է�:";
	std::cin >> LoanAmount; // ����ݾ� �Է�

	principal = LoanAmount / 12;
	MonthlyPaymentAmount = principal + int(Interest); // �ſ� ���Աݾ�

	int i;
	for (i=1;i<12;i++)
	{
		std::cout << i << "��° �� ���� �ݾ� : " << MonthlyPaymentAmount << std::endl;

	}


}
