#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
//need for shell color on windows machine
#include <Windows.h>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	//varibles
	char type ;
	double temp;
	double convert;
	// ask for input
	cout << "Please enter 'C' for Celsius and 'F' for Fahrenheit" << endl;
	cin >> type;
	switch (type)
	{
	case 'C' :
	case 'c':
		cout << "Please enter the tempture in Celsius "<< endl;
		cin >> temp ;
	//calculation
		convert = (9.0/5.0)*temp + 32.0 ;
			cout << "the tempeture is " << fixed << setprecision(2) <<  convert <<  " degress Fahrenheit";
		break;
	case 'F': 
	case 'f':
		cout << "Please enter the tempture in Fahrenheit "<< endl;
	cin >> temp ;
	//calculation
	convert = (5.0/9.0)*(temp - 32.0) ;
	cout << "the tempeture is " << fixed << setprecision(2) <<  convert <<  " degress Celsius";
	break;

	default: cout << "Error! Please enter 'C' or 'F' next time";


	}
	


	_getch();
	return 0;
}
