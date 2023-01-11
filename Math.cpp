#include <iostream>
#include "Log.h"


static int Multiply(int a, int b)
{
	Log("Multuply");
	return(a * b);
}

int main()
{	
	std::cout << Multiply(5, 8) << std::endl;
	std::cin.get();
}