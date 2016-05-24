/*
 * Rodrigo Luzuriaga
 * Project #3 - Question #3
 * CSCI 110 - T/Th
 * Due Date: 5/24/2016
 */

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

main()
{
	//Variable decleration
	ofstream myfile; //Only used to get the output onto a file for printing.
	string str_in;
	string str_new;
	char array_letter = 'a';
	int string_length;
	int vowel_count = 0, consonant_count = 0;
	int array[26] = {0};
	int i, j;
	int spacer = 0;

	myfile.open("Answers/Output_Q3.txt");
	
	cout << "Please enter the string: ";
	getline(cin, str_in);

	myfile << "Please enter the string: " << str_in << endl;

	string_length = str_in.size();
	cout << endl << "This is how many characters were inputed: " << string_length << endl;
	myfile << endl << "This is how many characters were inputed: " << string_length << endl;


	string_length--; //Makes string_length start from 0 from future uses
	// cout << string_length << endl; //Just to check


	for (i = 0; i <= string_length; i++)
	{
		if (str_in[i] == ' ')
		{
			spacer = i;
		}
		else
		{
			if (str_in[i] >= 65 && str_in[i] <= 90)
			{
				str_in[i] = str_in[i] + 32;
			}
			str_new = str_new + str_in[i];
		}
	}

//	cout << "This should be the string (all lowercase): " << str_new << endl;
	string_length = str_new.size();
	//cout << "This is the new string length: " << string_length << endl;
	string_length--;

	for (i = 0; i <= string_length; i++)
	{
		for (j = 97; j < 123; j++)
		{
			if (str_new[i] == j)
			{
				array[j - 97]++;
				// cout << "Array " << i << ": " << array[j - 97] << endl;
				j = 123;
			}
		}
	}

	cout << endl;
	myfile << endl;

	for (i = 0; i < 26; i++)
	{
		if (array[i] != 0)
		{
			cout << "The letter " << char(i + 65) << " has appeared " << array[i] << " time(s)." << endl;
			myfile << "The letter " << char(i + 65) << " has appeared " << array[i] << " time(s)." << endl;
		}
	}

	cout << endl << endl;
	myfile << endl << endl;

	int highest_array_value = 0;
	int highest_number;
	for  (i = 0; i < 26; i++)
	{
		if (array[i] > highest_array_value)
		{
			highest_array_value = array[i];
			highest_number = i;
			//cout << "Array " << highest_number << " : " << highest_array_value << endl;
		}
	}
	cout << "Array " << char(highest_number + 65) << " is the highest letter used. It is used " << highest_array_value << " times." << endl;
	myfile << "Array " << char(highest_number + 65) << " is the highest letter used. It is used " << highest_array_value << " times." << endl;

//	cout << "this is the highest array value: " << highest_array_value << endl;

	int second_highest_array_value = highest_array_value;
	int second_highest_number;
	for (i = 0; i < 26; i++)
	{
		if (array[i] < highest_array_value && array[i] > i)
		{
			second_highest_array_value = array[i];
			second_highest_number = i;
		}
	}
	cout << "Array " << char(second_highest_number + 65) << " is the second highest letter user. It is used " << second_highest_array_value << " times." << endl;
	myfile << "Array " << char(second_highest_number + 65) << " is the second highest letter user. It is used " << second_highest_array_value << " times." << endl;
	
	myfile.close();
}
