/*
 * Project #4 - Question #4
 * 	CSCI 110 - T/Th
 * 
 * Names:
 * 	Rodrigo Luzuriaga
 * 	Jonathan Hanbali
 * 	Yingying Zhang
 * 
 * Compiler: g++(linux)
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
	/* Variable declaration */
	ifstream file1, file2, file3;
	ofstream united_file;
	string text;

	/* Opens all the files needed for the function to work */
	file1.open("files/file1"); // File 1 from website
	file2.open("files/file2"); // File 2 from website
	file3.open("files/file3"); // File 3 from website
	united_file.open("files/United_File"); //File that will contain the united text


	/* This set inputs all the text files into the united file */
	getline(file1, text);
	united_file << text << " ";

	getline(file2, text);
	united_file << text << " ";

	getline(file3, text);
	united_file << text << " \n";


	/* This set just closes all the files */
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
	/* Variable declaration */
	ifstream original_file;
	ofstream fixed_file;
	string text_holder_og, text_modified_1, final_text;
	int i, j = 1, text_size;


	
	original_file.open("files/United_File"); // Opens the file that was created in the last function with the united text
	fixed_file.open("files/Fixed_Spaces_File"); // Creates and opens a new file that fixes the spacing in the other file


	getline(original_file, text_holder_og); // Inputs all the text from the original file into a placeholder variable

	text_size = text_holder_og.size(); // Gets the size of all the text in the placeholder variable to use in the for loop

	for  (i = 0; i < text_size; i++) // Loop to delete the double spaces
	{
		if (text_holder_og[i] == ' ') // Checks if the character is a space
		{
			if (text_holder_og[j] != ' ') // Checks if the character next to the last character is also a space
			{
				text_modified_1 = text_modified_1 + text_holder_og[i]; // If both options are true add the fist character to a new variable
			}
		}
		else
		{
			text_modified_1 = text_modified_1 + text_holder_og[i]; // Add the character in the loop to the variable
		}
		j++;
	}


	text_size = text_modified_1.size(); //Grab the new size for the loop

	for (i = 1; i < text_size; i++) // This for loop is only here to fix the error of having a space at the start of the new file.
	{
		if (text_modified_1[0] != ' ') // This checks that the first character of the variable is not a space and if so it adds it to the final variable
		{
			final_text = final_text + text_modified_1[i];
		}
		else
		{
			final_text = final_text + text_modified_1[i]; // Adds every other character into that final variable
		}
	}


	fixed_file << final_text << "\n"; // Outputs the final variable into the new text file

	
	/* Closes all the files opened for this function */
	original_file.close();
	fixed_file.close();
}





/*
 * Function for 4c
 */
int WordCounter()
{
	/* Variable declaration */
	ifstream file_in;
	int i, word_count = 0, size;
	string input;


	file_in.open("files/Fixed_Spaces_File"); // Opens the fixed file created in the last function 

	getline(file_in, input); // Gets the input from that file into a string variable

	size = input.size(); // Gets the size of the input for use in the loop


	/* The next loop checks for spaces to count how many word there are */
	for (i = 0; i < size; i++)
	{
		if (input[i] == ' ')
		{
			word_count++;
		}
	}

	return word_count; // Returns an integer to the main function when this function is called
}





/*
 * Function for 4d - part 1
 */
string WordCharacterCounterLowest()
{
	/* Variable declaration */
	ifstream file_in;
	string word_holder, input, new_input;
	vector<string> input_whole_word_vector;
	int lowest, lowest_placement;
	int i, size;
	string lowest_word;


	file_in.open("files/Fixed_Spaces_File"); // Opens the file containing the fixed text
	getline(file_in, input); // Input the text from that file to a string variable

	size = input.size(); // Get the size of the text to use in for loop


	/* This loop is used for getting the text without any punctuation */
	for (i = 0; i < size; i++)
	{
		if (input[i] == ',' || input[i] == '.' || input[i] == '\'') // Checks if the character is a punctuation 
		{
			continue; // If the condition is true then continue to the next character and check again
		}
		else
		{
			new_input = new_input + input[i]; // If the character is not a punctuation mark add that character to a new sting variable
		}
	}

	size = new_input.size(); // Gets the size of of the new string without all the punctuation for the next loop


	/* This loop gets each word into a vector each word in a place */
	for (i = 0; i < size; i++)
	{
		if (new_input[i] == ' ') // Checks if the character that the loop is on is a space 
		{
			input_whole_word_vector.push_back(word_holder); // Enter the word into the next space of the vector
			word_holder.clear(); // Clear the word so that it is empty
		}
		else
		{
			word_holder = word_holder + new_input[i]; // if the character that the loop is on is not a space then add that character to a variable that holds the word
		}
	}


	lowest = input_whole_word_vector[0].size(); // Get the size of the first word in the vector just as a placeholder for the lowest size since it cannot be empty

	size = input_whole_word_vector.size(); // Gets the size of the vector (as in how many words are in the vector)



	/* This loop checks if the word size that is currectly in the variable "lowest" is actually lower than the word size that the loop is in */
	for (i = 0; i < size; i++) 
	{
		if (input_whole_word_vector[i].size() < lowest) // Checks if the word size that is currently in the loop is smaller than the "lowest" variable
		{
			lowest = input_whole_word_vector[i].size(); // Makes the word size that the loop is on the new "lowest" (only if it is less than the original size)
			lowest_placement = i; // Grabs the placement of that word in the vector so that the program can return the actual word
		}
		else if (input_whole_word_vector[i].size() == lowest)
		{
			continue; // If the word in the vector is equal to the one that is in the variable "lowest" then just skip it and go to the next step
		}
	}

	lowest_word = input_whole_word_vector[lowest_placement]; // Makes the variable "lowest_word" contain the actual word from the vector

	return lowest_word; // Returns the word as a string to the main function.
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
	string highest_word;
	string string_to_return;
	int highest;
	int highest_placement;
	int i, size;

	file_in.open("files/Fixed_Spaces_File"); // Opens the file containing the fixed text
	getline(file_in, input);// Input the text from that file to a string variable

	size = input.size(); // Gets the size of the text in that variable


	/* This loop is used for getting the text without any punctuation */
	for (i = 0; i < size; i++)
	{
		if (input[i] == ',' || input[i] == '.' || input[i] == '\'') // Checks if the character is a punctuation 
		{
			continue; // If the condition is true then continue to the next character and check again
		}
		else
		{
			new_input = new_input + input[i]; // If the character is not a punctuation mark add that character to a new sting variable
		}
	}

	size = new_input.size(); // Gets the size of of the new string without all the punctuation for the next loop



	/* This loop gets each word into a vector each word in a place */
	for (i = 0; i < size; i++)
	{
		if (new_input[i] == ' ') // Checks if the character that the loop is on is a space 
		{
			input_whole_word_vector.push_back(word_holder); // Enter the word into the next space of the vector
			word_holder.clear(); // Clear the word so that it is empty
		}
		else
		{
			word_holder = word_holder + new_input[i]; // if the character that the loop is on is not a space then add that character to a variable that holds the word
		}
	}


	highest = input_whole_word_vector[0].size(); // Get the size of the first word in the vector just as a placeholder for the highest size since it cannot be empty

	size = input_whole_word_vector.size(); // Gets the size of the vector (as in how many words are in the vector)



	/* This loop checks if the word size that is currectly in the variable "highest" is actually higher than the word size that the loop is in */
	for (i = 0; i < size; i++)
	{
		if (input_whole_word_vector[i].size() > highest) // Checks if the word size that is currently in the loop is larger than the "highest" variable
		{
			highest = input_whole_word_vector[i].size(); // Makes the word size that the loop is on, the new "highest" (only if it is greater than the original size)
			highest_placement = i; // Grabs the placement of that word in the vector so that the program can return the actual word
		}
		else
		{
			continue; // If the word in the vector is equal to the one that is in the variable "highest" then just skip it and go to the next step
		}
	}

	highest_word = input_whole_word_vector[highest_placement]; // Makes the variable "highest_word" contain the actual word from the vector

	return highest_word; // Returns to main the string variable with the highest word from the text file
}


main()
{
	//Variable declaration
	ofstream output;
	int word_counter;
	string highest_word, lowest_word;


	output.open("files/text_output.txt");


	cout << "Question 4a output: " << endl;
	output << "Question 4a output: \n";
	
	FileUniter();
	
	cout << "The file \"United_File\" was created out of the three files provided." << endl << endl << endl;
	output << "The file \"United_File\" was created out of the three files provided.\n\n\n";




	cout << "Question 4b output: " << endl;
	output << "Question 4b output: \n";
	
	SpaceCorrector();
	
	cout << "The file \"Fixed_Spaces_File\" was created fixing the extra spaces in the \"United_File\" file." << endl << endl << endl;
	output << "The file \"Fixed_Spaces_File\" was created fixing the extra spaces in the \"United_File\" file.\n\n\n";




	cout << "Question 4c output: " << endl;
	output << "Question 4c output: \n";
	
	word_counter = WordCounter();
	
	cout << "There are " << word_counter << " word in the text file."<< endl << endl << endl;
	output << "There are " << word_counter << " word in the text file.\n\n\n";




	cout << "Question 4d output: " << endl;
	output << "Question 4d output: \n";
	
	lowest_word = WordCharacterCounterLowest();
	
	cout << "The smallest word in the text file is: " << lowest_word << endl;
	output << "The smallest word in the text file is: " << lowest_word << "\n";
	
	highest_word = WordCharacterCounterHighest();
	
	cout << "The largest word in the text file is: " << highest_word << endl;
	output << "The largest word in the text file is: " << highest_word << "\n";


	output.close();
}















