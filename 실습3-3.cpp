// 은행에서 임의 금액을 1년 단위로 대출 받았을 때 개월 별 납입금액을
// 계산하여 출력하자.
// 연 이율은 2.5%, 매월 납입금액은 원금과 이자의 합으로 원금은 대출금액을
// 12로 나눈 몫으로 한다.
// 대출금액과 납입금액은 원 단위로 처리한다.

// 대출금액 : 정수형
// 월 납입금액 : 정수형  원금+이자  
// 원금 : 정수형 대출금액 / 12 배정도
// 이자 : 배정도
// 연이율 : 배정도형 0.025



#include <iostream>

int LoanAmount;  // 대출금액 
int principal;  // 원금 
double Interest = 0.025; // 이자
int MonthlyPaymentAmount; // 월 납입금액


int main()
{
	std::cout << "대출금액 입력:";
	std::cin >> LoanAmount; // 대출금액 입력

	principal = LoanAmount / 12;
	MonthlyPaymentAmount = principal + int(Interest); // 매월 납입금액

	int i;
	for (i=1;i<12;i++)
	{
		std::cout << i << "번째 달 납입 금액 : " << MonthlyPaymentAmount << std::endl;

	}


}
