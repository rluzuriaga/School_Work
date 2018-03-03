/*
 * Rodrigo Luzuriaga
 * Project #3 - Question #2b
 * CSCI 110 - T/Th
 * Due Date: 5/24/2016
 */

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

main()
{
	//Variable declaration
	ofstream myfile; //Only used to get the output onto a file for printing.
	int decimal_input, decimal_remainder;
	int counter_main = 0, counter_1;
	vector<int> binary;
	
	
	myfile.open("Answers/Output_Q2b.txt");
	
	cout << "Please enter the decimal number you want to convert: ";
	cin >> decimal_input;
	
	myfile << "Please enter the decimal number you want to convert: " << decimal_input << endl;
	
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
			myfile << "\n ";
		}
		
		cout << binary[counter_main];
		myfile << binary[counter_main];
		counter_main--;
	}
	
	cout << endl;
	myfile << endl;
	
	
	myfile.close();
}