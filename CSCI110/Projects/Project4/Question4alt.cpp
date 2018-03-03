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
	// Variable declaration
	ifstream file1, file2, file3;
	ofstream united_file;
	string text;

	// 
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
 * Function for 4b
 */
void SpaceCorrector()
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


	fixed_file << final_text << "\n";


	original_file.close();
	fixed_file.close();
}





/*
 * Function for 4c
 */
int WordCounter()
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
 * Function for 4d - part 1
 */
string WordCharacterCounterLowest()
{
	//Variable declaration
	ifstream file_in;
	string word_holder, input, new_input;
	vector<string> input_whole_word_vector;
	int lowest, lowest_placement;
	int i, size;
	string lowest_word;

	file_in.open("files/Fixed_Spaces_File");
	getline(file_in, input);

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


	lowest = input_whole_word_vector[0].size();

	size = input_whole_word_vector.size();

	for (i = 0; i < size; i++)
	{
		if (input_whole_word_vector[i].size() < lowest)
		{
			lowest = input_whole_word_vector[i].size();
			lowest_placement = i;
		}
		else if (input_whole_word_vector[i].size() == lowest)
		{
			continue;
		}
	}

	lowest_word = input_whole_word_vector[lowest_placement];

	return lowest_word;
}




/*
 * Function for 4d - part 2
 */
string WordCharacterCounterHighest()
{
	//Variable declaration
	ifstream file_in;
	string word_holder, new_input;
	vector<string> input_whole_word_vector;
	string input;
	string highest_word1, highest_word2, highest_word3;
	string string_to_return;
	int highest1, highest2 = 0, highest3 = 0;
	int highest_placement1, highest_placement2 = 0, highest_placement3 = 0;
	int i, size;

	file_in.open("files/Fixed_Spaces_File");
	getline(file_in, input);

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


	highest1 = input_whole_word_vector[0].size();

	size = input_whole_word_vector.size();

	for (i = 0; i < size; i++)
	{
		if (input_whole_word_vector[i].size() > highest1)
		{
			highest1 = input_whole_word_vector[i].size();
			highest_placement1 = i;
		}
		else
		{
			continue;
		}
	//	else if (input_whole_word_vector[i].size() == highest1)
	//	{
	//		if (highest2 <= highest1)
	//		{
	//			if (highest2 == highest1)
	//			{
	//				highest2 = input_whole_word_vector[i].size();
	//				highest_placement2 = i;
	//			}
	//			else
	//			{
	//				continue;
	//			}
	//		}
	//		else if (highest3 <= highest1 && highest3 <= highest2)
	//		{
	//			if (highest3 == highest1)
	//			{
	//				highest3 = input_whole_word_vector[i].size();
	///				highest_placement3 = i;
	//			}
	//			else
	//			{
	//				continue;
	//			}
	//		}
	//		else
	//		{
	//			continue;
	//		}
		}
	}

	highest_word1 = input_whole_word_vector[highest_placement1];
//	highest_word2 = input_whole_word_vector[highest_placement2];
//	highest_word3 = input_whole_word_vector[highest_placement3];

//	string_to_return = highest_word1 + ", " + highest_word2 + ", " + highest_word3;

//	return string_to_return;

	return highest_word1;
}


main()
{
	//Variable declaration
	int word_counter;
	string highest_word, lowest_word;


	FileUniter();


	SpaceCorrector();


	word_counter = WordCounter();
	cout << word_counter << endl;


	highest_word = WordCharacterCounterHighest();
	cout << highest_word << endl;


	lowest_word = WordCharacterCounterLowest();
	cout << lowest_word << endl;


}















