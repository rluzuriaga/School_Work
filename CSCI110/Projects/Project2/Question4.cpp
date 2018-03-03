/*
	Rodrigo Luzuriaga
	Project #2 - Question #4
	CSCI 110 T/TH
	Due - 5/3/2016
*/

#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	//Variable creation.
	char input[100];
	int i, upper = 0, counter = 0;
	
	
	cout << "Enter the string (if done enter !0): " << endl;
	cin >> input;
	
	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			upper++;
		}
		
		if (input[i] == 'A')
		{
			input[i] = 'a';
		}
		else if (input[i] == 'B')
		{
			input[i] = 'b';
		}
		else if (input[i] == 'C')
		{
			input[i] = 'c';
		}
		else if (input[i] == 'D')
		{
			input[i] = 'd';
		}
		else if (input[i] == 'E')
		{
			input[i] = 'e';
		}
		else if (input[i] == 'F')
		{
			input[i] = 'f';
		}
		else if (input[i] == 'G')
		{
			input[i] = 'g';
		}
		else if (input[i] == 'H')
		{
			input[i] = 'h';
		}
		else if (input[i] == 'I')
		{
			input[i] = 'i';
		}
		else if (input[i] == 'J')
		{
			input[i] = 'j';
		}
		else if (input[i] == 'K')
		{
			input[i] = 'k';
		}
		else if (input[i] == 'L')
		{
			input[i] = 'l';
		}
		else if (input[i] == 'M')
		{
			input[i] = 'm';
		}
		else if (input[i] == 'N')
		{
			input[i] = 'n';
		}
		else if (input[i] == 'O')
		{
			input[i] = 'o';
		}
		else if (input[i] == 'P')
		{
			input[i] = 'p';
		}
		else if (input[i] == 'Q')
		{
			input[i] = 'q';
		}
		else if (input[i] == 'R')
		{
			input[i] = 'r';
		}
		else if (input[i] == 'S')
		{
			input[i] = 's';
		}
		else if (input[i] == 'T')
		{
			input[i] = 't';
		}
		else if (input[i] == 'U')
		{
			input[i] = 'u';
		}
		else if (input[i] == 'V')
		{
			input[i] = 'v';
		}
		else if (input[i] == 'W')
		{
			input[i] = 'w';
		}
		else if (input[i] == 'X')
		{
			input[i] = 'x';
		}
		else if (input[i] == 'Y')
		{
			input[i] = 'y';
		}
		else if (input[i] == 'Z')
		{
			input[i] = 'z';
		}
		else if (input[i] == ' ')
		{
			input[i] = ' ';
		}
		else
		{
			input[i] = input[i];
		}
		
		counter++;
	}
	
	
	i = 0;
	
	while (i < counter)
	{
		cout << input[i];
		i++;
	}
	cout << " " << endl;
	
}

