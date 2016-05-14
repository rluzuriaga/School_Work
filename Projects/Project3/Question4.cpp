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
//	int skip_int = -1;
	int i;
	vector<char> pal;
	vector<char> pal_backwards;

	cout << "Please enter a word(s) to check is if is a palidrome: ";
	getline(cin, palidrome_input);
// 	cin.ignore('\n');

	palidrome_input_original = palidrome_input;
	input_size = palidrome_input_original.size();
	input_size--;

	placeholder = input_size;


	cout << "Input size: " << input_size << endl << endl;

	for (i = 0; i <= input_size; i++)
	{
		if (palidrome_input[i] == ' ')
		{
			i += 1;
		}
		else
		{	
			pal.push_back(palidrome_input[i]);
		}

		cout << "This is the pal vector using [i]: " << pal[i] << endl;
	}

	cout << endl << endl << endl;

    i = input_size;
    while (i >= 0)
    {
        pal_backwards.push_back(palidrome_input[i]);
        i--;
    }
    
    i = 0;
    while (i <= input_size)
    {
        cout << "This should be the backwards of the input: " << pal_backwards[i] << endl;
        i++;
    }


// 	for (i = input_size; i >= 0; i--)
// 	{
// 	    cout << "This should be the backwards of pal: " << pal[i] << endl;
// 		pal_backwards.push_back(pal[i]);
// // 		cout << pal_backwards[i];
// 		//	cout << "This is the pal_backwards vector should be the backwards result of the last outputs: " << pal_backwards[i] << endl;
// 	}

	cout << endl << endl;




}
