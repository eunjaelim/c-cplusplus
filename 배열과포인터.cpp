// ������(pointer) : ������ �ּҸ� �����ϴ� ����

# include <stdio.h>

int main() {

	/*
	int a = 10;
	int* ptr_a = &a;
	printf("ptr_a�� ��:%d\n", ptr_a);
	printf("ptr_a+1�� �� : %d\n", ptr_a + 1);
	*/

	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // arr = &arr[0]

	/*
	printf("arr�� �� : %d\n", arr);
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d]:%d\n", i,&arr[i]); //4����Ʈ�� ���� �Ҵ�
		printf("arr + %d = %d\n", i, arr + i);
	}
	*/

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", *(arr + i));  // arr+i �ּҰ��� �ִ� �� �ҷ�����
	}

	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d\n", *ptr);
	}

}