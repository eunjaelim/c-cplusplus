// 배열 포인터
// 포인터 배열 : 포인터들이 배열되어 있음

#include <stdio.h>

int main() {
	//int(*ptr)[4];
	//int* ptr[4]; // 괄호를 쓰지 않은 것
	
	/*
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	int* ptr[4];

	ptr[0] = &a;
	ptr[1] = &c;
	ptr[2] = &d;
	ptr[3] = &b;


	printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
	*/

	/*
	int arr[4] = { 1,2,3,4 };
	int* ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d", *ptr[i]);
	}
	printf("\n");

	*/

	char strings[3][10] = { "Hello","World","Doodle" };
	char* p_str[3];

	for (int i = 0; i < 3; i++) {
		p_str[i] = strings[i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", p_str[i]);
	}

}

   
