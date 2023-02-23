// prototype : 원형, 시제품

#include <stdio.h>

// 프로토타입
// 미리 선언해 주면 작성 순서가 바뀌어도 정상 작동 

void walk(int);
void rotate(int);
void drawSquare();




	int main() {
		drawSquare();
	}



	//걷기
	void walk(int distance) {
		printf("%dcm를 걸었습니다.\n", distance);
	}
	//돌기
	void rotate(int angle) {
		printf("%d도 회전했습니다.\n", angle);
	}

	void drawSquare() {
		for (int i = 1; i <= 4; i++) {
			walk(10);
			rotate(90);

		}
	}