// 포인터(pointer) : 변수의 주소를 저장하는 변수

# include <stdio.h>

int main() {

	/*
	int a = 10;
	int* ptr_a = &a;
	printf("ptr_a의 값:%d\n", ptr_a);
	printf("ptr_a+1의 값 : %d\n", ptr_a + 1);
	*/

	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // arr = &arr[0]

	/*
	printf("arr의 값 : %d\n", arr);
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d]:%d\n", i,&arr[i]); //4바이트씩 공간 할당
		printf("arr + %d = %d\n", i, arr + i);
	}
	*/

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", *(arr + i));  // arr+i 주소값에 있는 값 불러오기
	}

	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d\n", *ptr);
	}

}