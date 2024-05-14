#include <iostream>
using namespace std;

int plusFunc(int x, int y){
  return x+y;
}

double plusFunc(double x, double y){
    return x+y;
}


int main(){

double myNum1 = plusFunc(3.4,1.4);
int myNum2 =  plusFunc(3,4);

cout << myNum1 << endl;
cout << myNum2 << endl;


return 0;
}
