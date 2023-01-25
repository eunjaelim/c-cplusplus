#include <iostream>

// Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
// Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� ��(�ڷ���)
// ��ü(������Ʈ)�� �����ؼ� ȣ���Ѵ�.

// private , protected, public

struct TV {
private:  // ����Ʈ���� private
	bool powerOn;  
	int channel;   
	int volume;    

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;            // ������ ���� ������ ���� �ٲ�
			std::cout << "������" << vol << "(��)�� �ٲ���ϴ�." << std::endl;
		}
	}

	void on() {
		powerOn = true;
		std::cout << "TV�� �׽��ϴ�." << std::endl; // tv�� �Ӷ��� �ٲ�
	}

	void off() {
		powerOn = false;
		std::cout << "TV�� �����ϴ�." << std::endl; // tv�� ������ �ٲ�
	}

	void setChannel(int cnl) {
		if (cnl >= 0 && cnl <= 100) {
			channel = cnl;
			std::cout << "ä����" << cnl << "(��)�� �ٲ���ϴ�." << std::endl;
		}
	}
};

int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
}