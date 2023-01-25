#include <iostream>

// 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
// 클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 툴(자료형)
// 객체(오브젝트)를 생성해서 호출한다.

// private , protected, public

struct TV {
private:  // 디폴트값은 private
	bool powerOn;  
	int channel;   
	int volume;    

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;            // 볼륨이 일정 수준일 때만 바뀜
			std::cout << "볼륨을" << vol << "(으)로 바꿨습니다." << std::endl;
		}
	}

	void on() {
		powerOn = true;
		std::cout << "TV를 켰습니다." << std::endl; // tv를 켤때만 바뀜
	}

	void off() {
		powerOn = false;
		std::cout << "TV를 껐습니다." << std::endl; // tv를 끌때만 바뀜
	}

	void setChannel(int cnl) {
		if (cnl >= 0 && cnl <= 100) {
			channel = cnl;
			std::cout << "채널을" << cnl << "(으)로 바꿨습니다." << std::endl;
		}
	}
};

int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
}