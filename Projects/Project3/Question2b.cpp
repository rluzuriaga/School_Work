/*
	Rodrigo Luzuriaga
	Project #3 - Question #2b
	CSCI 110 - T/Th
*/
#include <iostream>
#include <vector>

using namespace std;

main()
{
	//Variable declaration
	int decimal_input, decimal_remainder;
	int counter_main = 0, counter_1;
	vector<int> binary;
	
	cout << "Please enter the decimal number you want to convert: ";
	cin >> decimal_input;
	
	
	while (decimal_input != 0)
	{
		decimal_remainder = decimal_input % 2;
		decimal_input = decimal_input / 2;
		binary.push_back(decimal_remainder);
		counter_main++;
	}
	
	counter_main--;
	// cout << "This is the counter after the subtraction: " << counter_main << endl;
	
	counter_1 = counter_main;
	
	while (counter_main >= 0)
	{
		if (counter_main == 3 || counter_main == 7 || counter_main == 11 || counter_main == 15 || counter_main == 19 || counter_main == 23 || counter_main == 27 || counter_main == 31 || counter_main == 35)
		{
			cout << " ";
		}
		
		cout << binary[counter_main];
		counter_main--;
	}
	
	cout << endl;
}











