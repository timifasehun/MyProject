#include <iostream>
using namespace std;
void main() 
{
	int x,y;
	char z,t;
	do 
	{
		cout << "Enter 1st #:";
		cin >> x;
		cout << endl ;
		cout << "Enter 2nd#:" ; 
		cin >> y ;
		cout << endl << endl;
		cout << "Enter operation (a/s/m/d)";
		cin >> z;
		cout << endl ;
		if ( z =='a'|| z == 'A' )
		{
			cout << x + y << endl << endl;
		}
		else if (z == 's' || z == 'S')
		{
			cout << x-y  << endl << endl;
		}
		else if (z == 'm' || z == 'M')
		{
			cout << x * y << endl << endl;
		}
		else if (z == 'd' || z == 'D')
		{
			cout << x / y << endl << endl;
		}
		cout << ("Would you like to perform another calculation");
		cin >> t;
	}
		while (t=='y' || t=='Y');
	}