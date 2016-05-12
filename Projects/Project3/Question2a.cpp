/*
	Rodrigo Luzuriaga
	Project #3 - Question #2a
	CSCI 110 - T/Th
*/

#include<iostream>

using namespace std;
 
int main()
{
	long binary_original;
	long decimal = 0;
	long remaining;
	long input;
	long base_number = 1;
 
	cout << "Please enter the binary that you want to convert to decimal: ";
	cin >> input;
	
	binary_original = input;
	
	cout << endl;
	
	while (input > 0)
	{
		remaining = input % 10;
		// cout << "This is the remainder (remaining = input % 10):  " << remaining << endl;  //These were all added to test 
		
		decimal = decimal + remaining * base_number;
		// cout << "This s the decimal (decimal = decimal + remaining * base_number):  " << decimal << endl;  //These were all added to test 
		
		base_number = base_number * 2;
		// cout << "This is the base number (base_number = base_number * 2):  " << base_number << endl;  //These were all added to test 
		
		input = input / 10;
		// cout << "This is the input at the end of the loop (input = input / 10):  " << input << endl << endl;  //These were all added to test 
		
	}
	cout << "The decimal equivalent of " << binary_original << " : " << decimal << endl;
	return 0;
}























