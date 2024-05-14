#include <iostream>
using namespace std;

int main(){

string greeting = "Hello";

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName << endl;
cout << firstName + " " + lastName << endl;

string fullName1 = firstName.append(lastName);
cout << fullName1 << endl;

int x = 10;
int y = 20;
int z = x+y;

string x1 = "10";
string y1 = "20";
string z1 = x1+y1;

//int x2 = 10;
//string y2 = "20";
//string z2 = x2+y2;

cout << "z : " << z << endl;
cout << "z1 : " << z1 << endl;

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of th txt string is : " << txt.length() << endl;

cout << "The length of th txt string is : " << txt.size() << endl;

string myString = "Hello";
cout << myString[0] << endl;
cout << myString[1] << endl;

string myName = "Hello my name is \"eunjaelim\"";
cout << myName << endl;

string txt1 = "It\'s alright.";
cout<< txt1 << endl;

string txt3 = "The character \\ is callen backslash";
cout << txt3 << endl;

string f_Name;
cout << "Type your first Name : ";
cin >> f_Name;
cout << "Your name is : " << f_Name;

string fName;
cout << "Type your full Name : ";
getline(cin,fName);
cout << "Your name is : " << fName;

return 0;
}
