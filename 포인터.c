// ������(pointer) : ������ �ּҸ� �����ϴ� ����

# include <stdio.h>

int main() {

	/*
	  int a = 20;

	  int* ptr_a;

	  ptr_a = &a;

	printf("a�� �� : %d\n", a);
	printf("a�� �ּҰ�: %d\n", &a);
	printf("ptr_a�� ����� ��:%d\n", ptr_a);
	printf("ptr_a�� ����Ű�� ������ ��: %d\n", *ptr_a);

	*/

	/*
	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);

	ptr = &b;
	printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);
	*/

	/*
	int a = 10;
	int* ptr;
	ptr = &a;

	printf("a�� ��: %d\n", a);

	*ptr = 20;
	printf("a�� ��: %d\n", a);
	*/

	int a = 10;

	int* ptr;
	ptr = &a;

	int** ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr=%d\n", &ptr);

	printf("**ptr_ptr=%d\n", **ptr_ptr);

		



}