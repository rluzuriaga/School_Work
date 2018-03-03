/*
 * Rodrigo Luzuriaga
 * Project #4 - Question #4c
 * CSCI 110 - T/Th
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int WordCounter ()
{
	//Variable declaration
	ifstream file_in;
	int i, word_count = 0, size;
	string input;

	file_in.open("files/Fixed_Spaces_File");

	getline(file_in, input);

	size = input.size();

	for (i = 0; i < size; i++)
	{
		if (input[i] == ' ')
		{
			word_count++;
		}
	}

	return word_count;
}

main()
{
	int word_count;
	word_count = WordCounter();
	cout << "There are " << word_count << " word in the file." << endl;
}
