
#include <conio.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

double Mult_Numbers(double, double);

int main(){
double number1 = 0;
double number2 = 0;
double answer = 0;
bool quit = false;

while (!quit)
{
cout << "Please enter the first number " ;
cin >> number1;
cout << endl;
cout << "Please enter the second number " ;
cin >> number2;
cout << endl;
answer = Mult_Numbers(number1, number2);
cout << "the answer is: " << fixed << setprecision(3)<< answer << endl;
string stop;
cout << "type q to quit: ";
cin >> stop;
if (stop == "Q" || stop == "q")
{
	quit = true;
}


}

return 0;

}
double Mult_Numbers(double number1, double number2)
{
	return (number1 * number2);
}