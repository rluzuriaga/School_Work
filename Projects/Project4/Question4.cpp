/*
* Rodrigo Luzuriaga
* Project #4 - Question #4
* CSCI 110 - T/Th
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



/*
 * Function for 4a
 */
void FileUniter()
{
	//Variable declaration
	ifstream file1, file2, file3;
	ofstream united_file;
	string text;
	
	file1.open("files/file1");
	file2.open("files/file2");
	file3.open("files/file3");
	united_file.open("files/United_File");
	
	
	getline(file1, text);
	united_file << text << " ";
	
	getline(file2, text);
	united_file << text << " ";
	
	getline(file3, text);
	united_file << text << " \n";
	
	
	file1.close();
	file2.close();
	file3.close();
	united_file.close();
	
}


/*
 * Function 4b
 */
void SpaceCorrector_File()
{
	//Variable declaration
	ifstream original_file;
	ofstream fixed_file;
	string text_holder_og, text_modified_1, final_text;
	int i, j = 1, text_size;
	int counter = 0; // Only for testing.
	
	
	original_file.open("files/United_File");
	fixed_file.open("files/Fixed_Spaces_File");
	
	
	getline(original_file, text_holder_og);
	
	text_size = text_holder_og.size();
	
	for  (i = 0; i < text_size; i++)
	{
		if (text_holder_og[i] == ' ')
		{
			if (text_holder_og[j] != ' ')
			{
				text_modified_1 = text_modified_1 + text_holder_og[i];
			}
			else // Only for testing purposes.
			{
				counter++;
			}
		}
		else
		{
			text_modified_1 = text_modified_1 + text_holder_og[i];
		}
		j++;
	}
	
	
	text_size = text_modified_1.size();
	
	for (i = 1; i < text_size; i++) // This for loop is only here to fix the error of having a space at the start of the new file.
	{
		if (text_modified_1[0] != ' ')
		{
			final_text = final_text + text_modified_1[i];
		}
		else
		{
			final_text = final_text + text_modified_1[i];
		}
	}
	
	
	// cout << "OG text: " << endl << text_holder_og << endl << endl;
	// cout << "New text: " << endl << final_text << endl << endl;
	// cout << "This is the counter: " << counter << endl;
	
	
	fixed_file << final_text << "\n";
	
	
	original_file.close();
	fixed_file.close();
}



/*
 * Function for 4c
 */
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



/*
 * Function 4b
 */
WordCharacterCounter()
{
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

	// cout << "This should be the string with no punctuation: " << endl << new_input << endl << endl << endl;


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
	
	// cout << "This is the size of the vector: " << input_whole_word_vector.size() << endl;
	
	
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
		
		// cout << "This is the size of the word in the spot # " << i << " on the vector: " << input_whole_word_vector[i].size() << endl;
	}
	
	// cout << "This is the lowest word count: " << input_whole_word_vector[lowest_placement] << endl;
	// cout << "This is the highest word count: " << input_whole_word_vector[highest_placement] << endl;
	
}



main()
{
	
}