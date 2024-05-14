#include <iostream>

using namespace std;

int main(){

if(20>18){
    cout << "20 is greater than 18"<<endl;
}

int x = 45;
int y = 233;
if (x>y){
    cout << "x is greater than y"<< endl;
}else{
    cout << "x is lower than y" << endl;
}
int time = 20;
if(time < 18){

    cout << "Good day."<< endl;
}else{
    cout << "Good evening."<< endl;
}

int time1 = 20;
string result = (time1 < 18)?"Good day":"Good evening";
cout << result;


return 0;
}
