#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

main()
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
	
	// return word_count;
	cout << "Word count: " << word_count << endl;
	
	
	
	
	//Variable declaration
	int a;
	string word_holder;
	vector<string> input_whole_word_vector;
	vector<string> input_per_character_vector;
	string new_input;
	int lowest, highest;
	int lowest_placement, highest_placement;

	size = input.size();


	for (i = 0; i < size; i++)
	{
		if (input[i] == ',' || input[i] == '.' || input[i] == '\'')
		{
			continue;
		}
		else
		{
			new_input = new_input + input[i];
		}
	}

	cout << "This should be the string with no punctuation: " << endl << new_input << endl << endl << endl;


	size = new_input.size();

	for (i = 0; i < size; i++)
	{
		if (new_input[i] == ' ')
		{
			input_whole_word_vector.push_back(word_holder);
			word_holder.clear();
		}
		else
		{
			word_holder = word_holder + new_input[i];
		}
	}
	
	cout << "This is the size of the vector: " << input_whole_word_vector.size() << endl;
	
	
	highest = input_whole_word_vector[0].size();
	lowest = input_whole_word_vector[0].size();

	size = input_whole_word_vector.size();

	for (i = 0; i < size; i++)
	{
		if (input_whole_word_vector[i].size() > highest)
		{
			highest = input_whole_word_vector[i].size();
			highest_placement = i;
		}
		else if (input_whole_word_vector[i].size() < lowest)
		{
			lowest = input_whole_word_vector[i].size();
			lowest_placement = i;
		}
		else if (input_whole_word_vector[i].size() == lowest || input_whole_word_vector[i].size() == highest)
		{
			continue;
		}

		cout << "This is the size of the word in the spot # " << i << " on the vector: " << input_whole_word_vector[i].size() << endl;
	}

	cout << "This is the lowest word count: " << input_whole_word_vector[lowest_placement] << endl;
	cout << "This is the highest word count: " << input_whole_word_vector[highest_placement] << endl;




}























