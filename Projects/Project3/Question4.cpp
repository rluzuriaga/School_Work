/*
 * Rodrigo Luzuriaga
 * Project #3 - Question #4
 * CSCI 110 - T/Th
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main ()
{
	//Variable declaration
	ofstream myfile; //Only used to get the output onto a file for printing.
	string palidrome_in, palidrome_in_og;
	string palidrome_1, palidrome_2;
	int input_size;
	int palidrome_size;
	int i;
	int word_tester = 0;
	int spacer = 0, alt_spacer = 0;

	myfile.open("Answers/Output_Q4.txt");

	cout << "Please enter a word(s) to check if it is a palidrome: ";
	getline(cin, palidrome_in);

	myfile << "Please enter a word(s) to check if it is a palidrome: " << palidrome_in << endl;

	palidrome_in_og = palidrome_in;
	input_size = palidrome_in_og.size();

	input_size--;
//	cout << "Input size (starts from 0): " << input_size << endl;
//	myfile << "Input size (starts from 0): " << input_size << endl;

	for (i = 0; i <= input_size; i++)
	{
		if (palidrome_in[i] == ' ')
		{
			if (spacer == 0)
			{
				spacer = i;
			}
			else
			{
				alt_spacer = i;
			}
		}
		else
		{
			if (palidrome_in[i] >= 65 && palidrome_in[i] <= 90)
			{
				string test_letter;
//				cout << "This is the capital letter: " << palidrome_in[i] << endl;
//				myfile << "This is the capital letter: " << palidrome_in[i] << endl;
				
				palidrome_in[i] = palidrome_in[i] + 32;
//				cout << "This should be the lowercase of last output: " << palidrome_in[i] << endl;
//				myfile << "This should be the lowercase of last output: " << palidrome_in[i] << endl;
			}
			palidrome_1 = palidrome_1 + palidrome_in[i];
		}
	}

	palidrome_size = palidrome_1.size();
//	cout << "Plaidrome size before the (--): " << palidrome_size << endl;
//	myfile << "Plaidrome size before the (--): " << palidrome_size << endl;

	palidrome_size--;
//	cout << "Palidrome size after the (--): " << palidrome_size << endl;
//	myfile << "Palidrome size after the (--): " << palidrome_size << endl;

//	cout << "This should be the palidrome without spaces and lowercase: " << palidrome_1 << endl;
//	myfile << "This should be the palidrome without spaces and lowercase: " << palidrome_1 << endl;

	for (i = palidrome_size; i >= 0; i--)
	{
		palidrome_2 = palidrome_2 + palidrome_1[i];
	}
//	cout << "This is palidrome 2: " << palidrome_2 << endl;
//	myfile << "This is palidrome 2: " << palidrome_2 << endl;

	for  (i = 0; i <= palidrome_size; i++)
	{
		if (palidrome_1[i] == palidrome_2[i])
		{
			word_tester++;
		}
		else
		{
			word_tester--;
		}
	}

	word_tester--;
//	cout << "Word tester (should be the same as last palidrome size): " << word_tester << endl;
//	myfile << "Word tester (should be the same as last palidrome size): " << word_tester << endl;

	if (word_tester == palidrome_size)
	{
		cout << "They are the same!!!" << endl;
		myfile << "They are the same!!!" << endl;
	}
	else
	{
		cout << "They are not the same! :(" << endl;
		myfile << "They are not the same! :(" << endl;
	}


	myfile.close();

}
