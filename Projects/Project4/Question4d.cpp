/*
 * Rodrigo Luzuriaga
 * Project #4 - Question #4d
 * CSCI 110 - T/Th
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int WordCounter() //Not the important function just need it for info for the other function
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
    
    file_in.close();
    
	return word_count;
}


WordLength(int word_count, string input)
{
	//Variable declaration
	int i, a;
	char word_holder;
	vector<string> input_whole_word_vector;
	vector<string> input_per_character_vector;

	size = input.size();

	for  (i = 0; i < size; i++)
	{
		if (input[i] != ',' || input[i] != '.' || input[i] != ' ')
		{
			word_holder = word_holder + input[i];
		}
		else if (input[i] == '\'')
		{
		    a++;
		}
		else if (input[i] == ',' || input[i] == '.' || input[i] == ' ')
		{
		    input_whole_word_vector.push_back(word_holder);
		    word_holder.clear();
		}
	}

    cout << "This is the size of the vector: " << input_whole_word_vector.size() << endl;

main()
{
	//Variable declaration
	int word_count;

	word_count = WordCounter();
}
