// return : �����ִ�, ��ȯ

# include <stdio.h>

// 2���� �Ű������� ���� ��ȯ

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
		printf("�ܾ��� �����մϴ�.\n");
		return -1; }

	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("   ������ ����: %d\n", itemCnt);
	printf("   �ܾ�: %d\n", money);
	return 0;
	}



int main() {
	result = buyItem(3000,5); //result = -1

	if (result = -1) {
		printf("���� �����Ͻñ���...\n");
	}
	
	buyItem(10,1);

}