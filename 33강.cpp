// call-by-value
// call-by-reference

#include <stdio.h>

/*  call by value
void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a, b;
	printf("�����Է�:");
	scanf_s("%d", &a);
	printf("�����Է�:");
	scanf_s("%d", &b);

	swap(&a, &b);

	printf("a=%d,b=%d\n", a, b);
}
*/
// call-by-reference
void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a, b;
	printf("�����Է�:");
	scanf_s("%d", &a);
	printf("�����Է�:");
	scanf_s("%d", &b);

	swap(&a, &b);

	printf("a=%d,b=%d\n", a, b);
}