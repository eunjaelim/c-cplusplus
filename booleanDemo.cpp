#include <iostream>
#include <cmath>

using namespace std;

int main(){


bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun << endl;
cout <<isFishTasty << endl;

int x = 10;
int y = 9;

cout << (x>y)<<endl;
cout << (9>10)<<endl;

cout << (x==10) << endl;
cout << (x==15)<<endl;

int myAge = 25;
int votingAge = 18;

cout << (myAge >= votingAge);

if (myAge >= votingAge){
    cout << "Old enough to vote!";
}else{
    cout << "Not old enough to vote.";
}

return 0;
}
