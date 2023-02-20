// return : 돌려주다, 반환

# include <stdio.h>

// 2개의 매개변수의 합을 반환

/*
int noMeaning() {
	printf("first\n");
	return 1;
}

int main() {

	int a;
	a = noMeaning();
	printf("%d\n",a);
}
*/

int itemCnt = 0; 
int money = 100;
int result;

int buyItem(int cost, int cnt) {
	if (money < cost) { 
		printf("잔액이 부족합니다.\n");
		return -1; }

	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("   아이템 개수: %d\n", itemCnt);
	printf("   잔액: %d\n", money);
	return 0;
	}



int main() {
	result = buyItem(3000,5); //result = -1

	if (result = -1) {
		printf("돈이 부족하시군요...\n");
	}
	
	buyItem(10,1);

}