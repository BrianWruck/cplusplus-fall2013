#include <conio.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

double  find_average(double, double, double);

	
int main()
{
	
	double number1 = 0;
	double number2 = 0;
	double number3 = 0;
	double average = 0;
	char test_input;
	bool quit = false;

	
	while (!quit)
	{
	
	
	cout << "Please enter your first number: " ;
	cin >> number1;
	cout << endl;
	cout << "Please enter your second number: " ;
	cin >> number2;
	cout << endl;
	cout << "Please enter your third number: " ;
	cin >> number3;
	cout << endl;
	
	

	
	average = find_average(number1, number2, number3);
	cout << "Your average is: " << fixed << setprecision(1) << average << endl << endl;
	cout << "Press Q to Quit or any key to find another trio average ";
	
	string stop;
	cin >> stop;
	if (stop == "q" || stop == "Q")
	{
	quit = true;
	}
	
	
	}


	return 0;
}


double find_average(double number1, double number2, double number3)
{
	return (number1 + number2 + number3)/3;
}