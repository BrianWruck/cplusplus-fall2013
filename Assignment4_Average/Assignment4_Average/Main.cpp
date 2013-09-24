#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
using namespace std;




int main()
{
float First_Num = 106.54;
float Second_Num = 89.532;
float Third_Num = 98.76;
float Total = (First_Num + Second_Num + Third_Num);
float Average = (First_Num + Second_Num + Third_Num) /3.0;


cout <<"First Number:  " << right << First_Num << endl;
cout <<"Second Number: "<< right << Second_Num << endl;
cout <<"Third Number:  " << right <<Third_Num << endl;
cout <<"Total:         " << right << fixed << setprecision(4) <<Total << endl;
cout <<"Averag:        " << right << fixed << setprecision(1) << Average << endl;



_getch();
return 0;

}

