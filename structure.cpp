#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
}; //r1;
//struct Rectangle r1;
int main(){
    struct Rectangle r1 = {10,5};

    //r1.length = 10;
    //r1.breadth = 5;
    //rintf("%d", sizeof(r1));
    r1.length = 15;
    r1.breadth =7;
    cout << r1.length << endl;
    cout << r1.breadth <<endl;
    return 0;
};
