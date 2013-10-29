#include <iostream>
#include <conio.h>
#include <iomanip>
//need for shell color on windows machine
#include <Windows.h>
#include <math.h>
using namespace std;

int main(){

double pay = 8;
double hours = 0;
double total = 0;
double overtime = 12;

cout << "How many hours worked?" << endl;
cin >> hours;
if (hours < 0)
{
cout << "please enter a postive number for hours" << endl;

}
else if(hours <= 40)
{
	total = hours * pay;
	cout << "Your pay check is $" << fixed << setprecision(2)<<  total <<  endl;
	
}
else
{
	total =(hours - 40)*overtime + 320;

cout << "Your pay check is $" << fixed << setprecision(2)<<  total <<  endl;
}
_getch();
return 0;
}
