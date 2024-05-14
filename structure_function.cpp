#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};

void initialise(struct Rectangle *r, int l, int b){
    r -> length = 1;
    r -> breadth = 1;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p;
    p = 2*(r.length + r.breadth);

    return p;
}



int main()
{

    Rectangle r = {0,0};

    int l,b;

    printf("Enter Length :");
    cin >> l ;
    printf("Enter Breadth :");
    cin >> b;

    initialise(&r, l, b);

    int a = area(r);
    int p = perimeter(r);

    printf("Aread = %d\nPerimeter=%d\n",a,p);
    return 0;
}
