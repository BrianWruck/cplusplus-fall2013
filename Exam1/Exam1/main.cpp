#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	//declare variables
	double milesDriven = 0;
	double Gallons  = 0;
	double Mpg = 0;
	//ask for miles driven
	cout << "Enter the miles driven: " ;
	// holds the data
	cin >> milesDriven;
	cout <<  endl;

	//ask for gallons used
	cout << "Enter the gallons of gas used: " ;
	// holds the data
	cin >> Gallons ;
	cout <<  endl;
	// calculation
	Mpg = milesDriven/Gallons;

	// out put
	cout << "Miles Per Gallon: " << fixed << setprecision(1) <<  Mpg;







	//finsih line!
_getch();
}