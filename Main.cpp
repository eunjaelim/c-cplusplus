# include <iostream>
using namespace std;

int main()
{
int a = 10;
int &r = a;

cout << a << endl << r << endl <<endl;

r++;

cout << a << endl;
cout << r << endl<<endl;

int b = 30;
r = b;

cout << b << endl << r << endl << a <<endl;
return 0;
}
