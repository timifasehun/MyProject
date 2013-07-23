#include <iostream>
#include <string>
using namespace std;
void main ()
{
	int a;
	int y;
	int b; 
	int c;
	int d;
	int x;
	do
	{
	std::cout << "Would you like to use the Timmy Calculator? (Yes = 1 , Definitely = 2) : \n" ;
	std::cin >> a ;
	std::cout << "Enter a number : \n" ;
	std::cin >> y ;
	std::cout << "Enter another number  : \n" ;
	std::cin >> b ;
	std::cout << "Choose your operation : \n 1-addition \n 2-division \n 3-multiplication \n 4-division \n" ;
	std::cin >> d ;
	
	if (d==1)
	{
		c = y + b;
	std::cout  << c;
	}
	else if (d==2)
	{
		c = y / b;
	std::cout << c;
	}
	else if (d==3)
	{
		c = y * b;
	std::cout << c;
	}
	else
	{
		c = y - b;
		std::cout << c;
	}
	std::cout << "Would you like to carry out another operation? (Yes = 1 , No = 2) \n" ;
	std::cin >> x;

} while (x==1);

}