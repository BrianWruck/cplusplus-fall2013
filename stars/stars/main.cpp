	#include <iostream>
	#include <conio.h>
	#include <windows.h>
	#include <iomanip>
	#include <string>


	using namespace std;

int main()
{
        int value = 10;
        int value2 = 2;
        for(int i=0; i<10; i++)
        {
                for(int j=0; j<=i; j++)
                {
                        cout << '*';
                }
                for(int j =0; j<value; j++)
                {
                        cout << ' ';
                }
                for(int j=10; j>i; j--)
                {
                        cout << '*';
                }
                for(int j =0; j<value2; j++)
                {
                        cout << ' ';
                }
                for(int j=0; j<i; j++)
                {
                        cout << ' ';
                }
                for(int j=10; j>i; j--)
                {
                        cout << '*';
                }
                
                for(int j=10; j>i; j--)
                {
                        cout << ' ';
                }
                for(int j=0; j<=i; j++)
                {
                        cout << '*';
                }
                value--;
                value2++;
                cout << endl;
        }
        _getch();
        return 0;
}