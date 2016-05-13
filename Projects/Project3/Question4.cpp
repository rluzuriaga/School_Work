/*
	Rodrigo Luzuriaga
	Project #3 - Question #4
	CSCI 110 - T/Th
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

main()
{
	//Variable declaration.
	string palidrome_input;
	string palidrome_input_original;
	int input_size;
	int placeholder;
	int skip_int = -1;
	vector<char> pal;
	vector<char> pal_backwards;

	cout << "Please enter a word(s) to check is if is a palidrome: ";
	getline(cin, palidrome_input);
	
	palidrome_input_original = palidrome_input;
	input_size = palidrome_input_original.size();
	input_size--;

	placeholder = input_size;


	cout << "Input size: " << input_size << endl;

	for (int i = 0; i <= input_size; i++)
	{
		if (palidrome_input[i] == ' ')
		{
			continue;
		}
		else
		{	
			pal.push_back(palidrome_input[i]);
			pal_backwards.push_back(palidrome_input[placeholder]);
		}

		cout << "This is the pal vector using [i]: " << pal[i] << endl;
		cout << "This is the pal_backwards vector using [placeholder] (should be the same as last output, if not then the word(s) is not a palidrome): " << pal_backwards[placeholder--] << endl;
		placeholder--;
	}





}
