#include <iostream>
using namespace std;


class MyClass{

public:

    void myMethod();
    // Inner Method

    //void myMethod(){
//
   // cout << "Hello World!" << endl;
  //  }


};


class Car{
public :
    int speed(int maxSpeed);

};

int Car::speed(int maxSpeed){
    return maxSpeed;
}

// Outside Method definition

void MyClass::myMethod(){
    cout << "Hello World!" << endl;
}



int main(){

MyClass myObj;

myObj.myMethod();

Car myObj2;


cout << myObj2.speed(200)<<endl;




return 0;
}
