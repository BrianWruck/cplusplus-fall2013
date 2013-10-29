#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "Helper.h"

using namespace std;

int main()
{
	
	Helper h = Helper();

	bool keep_looping = true;

	while(keep_looping)
	{
		cout << "Select a menu option, 'q' to quit:" << endl;

		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Average" << endl;

		string option;
		cin >> option;
		if (option == "q" || option == "Q")
		{
			//quit
			keep_looping = false;
		}
		else
		{
			if (h.IsNumericInt(option))
			{
				int num_option = h.ConvertToInt(option);				
				if (num_option == 1 || num_option == 2 || num_option == 3 || num_option == 4 || num_option == 5)
				{
				int num_one, num_two, num_answer;
				string input_one, input_two;
				//ask for the numeric inputs
				cout << "First Number? ";
				cin >> input_one;
				cout << "Second Number? ";
				cin >> input_two;
				if (h.IsNumericInt(input_one) && h.IsNumericInt(input_two))
				{
					num_one = h.ConvertToInt(input_one);
					num_two = h.ConvertToInt(input_two);
					switch (num_option)
					{
						case 1:
							//addition
							num_answer = num_one + num_two;
							cout << "The answer is:" << num_answer << endl;
							break;
						case 2:
							//subtraction	
							num_answer = num_one - num_two;
							cout << "The answer is:" << num_answer << endl;
							break;
							
							
							
						case 3:
							//multiplication
							num_answer = num_one * num_two;
							cout << "The answer is:" << num_answer << endl;
							break;

							case 4:
							//Division
							num_answer = num_one / num_two;
							cout << "The answer is:" << num_answer << endl;
							break;
							case 5:
							//average
							num_answer = (num_one + num_two)/2;
							cout << "The answer is:" << num_answer << endl;
							break;


					}
				}
				else
				{
					cout << "Please enter an exiting menu option" << endl;
				}
				
		}
			else
			{
				cout << "Please enter a valid number!" << endl;
			}
				}
				else
				{
					cout << "Please enter valid numbers" << endl;
				}
		}
	}
	
	cout << "Goodbye!";
	_getch();
	return 0;
}

