#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
using namespace std;

//global varibles
const int COLUMN_ONE_WIDTH = 5;
const int COLUMN_TWO_WIDTH = 10;


int main()
{

int intNum = 32;
double dblNum = 42.98765;

cout << "the hex of " << intNum << " is: " << hex  << intNum << endl;


cout << "the octal of " << intNum << " is: " << oct << intNum << endl;

cout << endl;


cout << setw(COLUMN_ONE_WIDTH)  << right << "| " << fixed << setprecision(3) << dblNum << "|" << endl;
cout << setw(COLUMN_ONE_WIDTH)  << right << "| " << fixed << setprecision(4) << dblNum << "|" << endl;
cout << setw(COLUMN_ONE_WIDTH)  << right << "| " << fixed << setprecision(5) << dblNum << "|" << endl;
cout << setw(COLUMN_ONE_WIDTH)  << right << "| " << fixed << setprecision(6) << dblNum << "|" << endl;
cout << endl;

cout << setw(COLUMN_ONE_WIDTH) << right<< "| "<< intNum << "|" << setw(COLUMN_TWO_WIDTH) << fixed << setprecision(2) <<  dblNum << "|"; 





_getch();
return 0;

}