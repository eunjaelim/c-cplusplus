#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{

public:
    int length;
    int breadth;



void initialise(int l, int b){
     length = l;
     breadth = b;
}

int area()
{
    return length * breadth;
}

int perimeter()
{
    int p;
    p = 2*(length + breadth);

    return p;
}

};


int main()
{

    Rectangle r;

    int l,b;

    printf("Enter Length :");
    cin >> l ;
    printf("Enter Breadth :");
    cin >> b;

    r.initialise(l, b);

    int a = r.area();
    int p = r.perimeter();

    printf("Aread = %d\nPerimeter=%d\n",a,p);
    return 0;
}
