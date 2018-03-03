/*
 * Rodrigo Luzuriaga
 * Project #3 - Question #2a
 * CSCI 110 - T/Th
 * Due Date: 5/24/2016
 */

#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>

using namespace std;

main()
{
    //Variable declation
    ofstream myfile; //Only used to get the output onto a file for printing.
    string input;
    int input_size;
    long long i, a, b = 0;
    long long addition = 0, addition_of_totals, total;
    int placeholder = 0;
    vector<char> binary_char_vect;
    vector<int> binary_int_vect;

    myfile.open("Answers/Output_Q2a.txt");

    cout << "Please enter the binary that you want to convert to decimal: ";
    cin >> input;
    
    myfile << "Please enter the binary that you want to convert to decimal: " << input << endl;

    input_size = input.size();
    input_size--; //Have to do this since the vector starts from 0
    // cout << "This is the input size after the fist subtraction: " << input_size << endl;

    for (i = input_size; i >= 0; i--)
    {
        binary_char_vect.push_back(input[i]);
    }

    for (i = 0; i <= input_size; i++)
    {
        if (binary_char_vect[i] == '0')
        {
            a = 0;
        }
        else if (binary_char_vect[i] == '1')
        {
            a = 1;
        }
        else
        {
        	cout << "Woaw! A binary number can only contain 0's and 1's! You entered something other than that!!" << endl;
            myfile << "Woaw! A binary number can only contain 0's and 1's! You entered something other than that!!" << endl;
            return 0;
        }
        binary_int_vect.push_back(a);
    }
	cout << endl;
    myfile << endl;

	cout << "This is the binary number backwards: ";
    myfile << "This is the binary number backwards: ";

    for (i = 0; i <= input_size; i++)
    {
    	cout << binary_int_vect[i];
        myfile << binary_int_vect[i];
    }

	cout << endl << endl;
    myfile << endl << endl;


	for (i = 0; i <= input_size; i++)
	{
		if (i == 0)
		{
			if (binary_int_vect[i] == 1)
			{
				a = 1;
				b = b + 1;
				addition = addition + b;
			}
			else if (binary_int_vect[i] == 0)
			{
				a = 0;
				b = b + 1;
			}
			else
			{
				cout << "Error 1" << endl;
				myfile << "Error 1" << endl;
			}
		}
		else if (i == 1)
		{
			if (binary_int_vect[0] == 0)
			{
				a = 2;
				b = b * 2;
				addition = addition + b;
			}
			else if (binary_int_vect[0] == 1)
			{
				b = b * 2;
				addition = addition + b;
			}
			else
			{
				cout << "Error 2" << endl;
				myfile << "Error 2" << endl;
			}
		}
		else if (i != 0 && i != 1)
		{
			if (binary_int_vect[i] == 1)
			{
				a = 1;
				b = b * 2;
				addition = addition + b;
			}
			else if (binary_int_vect[i] == 0)
			{
				a = 0;
				b = b * 2;
			}
			else
			{
				cout << "Error 3" << endl;
				myfile << "Error 3" << endl;
			}
		}

		placeholder++;
		//myfile << "This is the position in the loop (starts at 0): " << i << endl;
		// myfile << "This is the binary number in the position of the loop: " << binary_int_vect[i] << endl;
		// myfile << "This is a: " << a << endl;
		// myfile << "This is b: " << b << endl;
		// myfile << "This is the addition: " << addition << endl;
		// myfile << "This is the placeholder: " << placeholder << endl << endl << endl << endl;
	}

	cout << "This is the decimal of the binary " << input << " is: " << addition << endl;;
	myfile << "This is the decimal of the binary " << input << " is: " << addition << endl;;

	myfile.close();
}


