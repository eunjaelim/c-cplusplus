#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    int p;
    p = 2*(length + breadth);

    return p;
}



int main()
{

    int length=0, breadth=0;

    printf("Enter Length :");
    cin >>  length ;
     printf("Enter Breadth :");
     cin >> breadth;

    int a = area(length,breadth);
    int p = perimeter(length,breadth);

    printf("Aread = %d\nPerimeter=%d\n",a,p);
    return 0;
}
