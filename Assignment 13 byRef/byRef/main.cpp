#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	double price;
	double fiveDollar = 5;
	double dollar = 1;
	double quarter = .25;
	double dime = .1;
	double nickel = .05;
	double penny = .01;

	cout << "Please Enter the Price of object ";
	cin >> price;  
	cout << endl;

	while (price > 10  )&&(price >= 0){

	
	cout << "Please Enter the Price of object ";
	cin >> price;
	cout << endl;
	}

	
	cout << price;




	






	_getch();
	return 0;
}

