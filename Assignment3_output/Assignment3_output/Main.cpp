#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <string>

using namespace std;
void Part_No(string name, float money);
string formatMoney(float);

//global varibles
const int COLUMN_ONE_WIDTH = 10;
const int COLUMN_TWO_WIDTH = 10;



int main()
{
	// header
	cout << left << setw(COLUMN_ONE_WIDTH) << "PART NO." << right <<setw(COLUMN_TWO_WIDTH) << "PRICE" << endl;
	
	//data entry
	Part_No("T1267", 6.34f);
	Part_No("T1300", 8.92f);
	Part_No("T2401", 65.40f);
	Part_No("T4482", 103.45f);


	// get user input
	_getch();
	return 0;
}

string formatMoney(float money)
{
	 //create a temporary character array
	char temp_price[16];
	//use sprintf to format the string two decimal places
	sprintf_s(temp_price, "$%.2f", money);
	//right align with a width of column_one_width
	return temp_price;
}

void Part_No (string name, float money)
{

// set a function
cout << left << setw(COLUMN_ONE_WIDTH) << name << right <<setw(COLUMN_TWO_WIDTH) << formatMoney(money) << endl;

}