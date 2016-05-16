/*
	Rodrigo Luzuriaga
	Project #3 - Question #4
	CSCI 110 - T/Th
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//variable declaration 1
string upper_letter;
string lower_letter;

string Letter_Changer(string upper_letter)
{
	if (upper_letter == 'A')
	{
		lower_letter = 'a';
	}
	else if (upper_letter == 'B')
	{
		lower_letter = 'b';
	}
	else if (upper_letter == 'C')
	{
		lower_letter = 'c';
	}
	else if (upper_letter == 'D')
	{
		lower_letter = 'd';
	}
	else if (upper_letter == 'E')
	{
		lower_letter = 'e';
	}
	else if (upper_letter == 'F')
	{
		lower_letter = 'f';
	}
	else if (upper_letter == 'G')
	{
		lower_letter = 'g';
	}
	else if (upper_letter == 'H')
	{
		lower_letter = 'h';
	}
	else if (upper_letter == 'I')
	{
		lower_letter = 'i';
	}
	else if (upper_letter == 'J')
	{
		lower_letter = 'j';
	}
	else if (upper_letter == 'K')
	{
		lower_letter = 'k';
	}
	else if (upper_letter == 'L')
	{
		lower_letter = 'l';
	}
	else if (upper_letter == 'M')
	{
		lower_letter = 'm';
	}
	else if (upper_letter == 'N')
	{
		lower_letter = 'n';
	}
	else if (upper_letter == 'O')
	{
		lower_letter = 'o';
	}
	else if (upper_letter == 'P')
	{
		lower_letter = 'p';
	}
	else if (upper_letter == 'Q')
	{
		lower_letter = 'q';
	}
	else if (upper_letter == 'R')
	{
		lower_letter = 'r';
	}
	else if (upper_letter == 'S')
	{
		lower_letter = 's';
	}
	else if (upper_letter == 'T')
	{
		lower_letter = 't';
	}
	else if (upper_letter == 'U')
	{
		lower_letter = 'u';
	}
	else if (upper_letter == 'V')
	{
		lower_letter = 'v';
	}
	else if (upper_letter == 'W')
	{
		lower_letter = 'w';
	}
	else if (upper_letter == 'X')
	{
		lower_letter = 'x';
	}
	else if (upper_letter == 'Y')
	{
		lower_letter = 'y';
	}
	else if (upper_letter == 'Z')
	{
		lower_letter = 'z';
	}

	return lower_letter;
}

//variable declaration 2
string palidrome_in, palidrome_in_og;
string palidrome_1, palidrome_2;
int input_size;
int i;
int spacer = 0, alt_spacer = 0;

main()
{
	cout << "Please enter a word(s) to check is if it is a palidrome: ";
	getline(cin, palidrome_in);

	palidrome_in_og = palidrome_in;
	input_size = palidrome_in_og.size();

	input_size--;
	cout << "Input size (should start from 0): " << input_size << endl;

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
			if (palidrome_in[i] >= 'A' && palidrome_in[i] <= 'Z')
			{
				cout << "This is the capital letter: " << palidrome_in[i] << endl;
				upper_letter = palidrome_in[i];
				string x = Letter_Changer(upper_letter);
				cout << "This should be the lowercase letter: " << x << endl;
			//	cout << "This should be the lower case of the last output: " << Letter_Changer(upper_letter) << endl;
			}
			palidrome_1 = palidrome_1 + palidrome_in[i];
		}
	}

	cout << "This should be the palidrome without space: " << palidrome_1 << endl;
}










