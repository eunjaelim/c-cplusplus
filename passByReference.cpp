#include <iostream>

using namespace std;

void swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}


int main(){
    int firstNum = 10;
    int secondNum = 20;

    swap(firstNum,secondNum);

    cout << "Before swap : " << "\n";
    cout << firstNum << secondNum <<"\n";

    return 0;

}

