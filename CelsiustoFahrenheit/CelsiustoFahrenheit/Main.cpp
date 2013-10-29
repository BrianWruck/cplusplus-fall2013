#include <iostream>
#include <iomanip>
#include <conio.h>

#include <string>
using namespace std;

int main()
{
	//declare variables
double Celsius = 0;
double Fahrenheit = 0;


// ask for the temp in celsius
cout << "What is the temperature in Celsius: ";
// place value in variable
cin >> Celsius;
// calculation
Fahrenheit = (9.0/5.0)*Celsius + 32.0;
// output
cout << " Temperature in Celsius: " << fixed << setprecision(2)  <<  Celsius << endl;
cout << " Temperature in Fahrenheit: " << fixed << setprecision(2)   << Fahrenheit << endl;





	_getch();
	return 0;
}