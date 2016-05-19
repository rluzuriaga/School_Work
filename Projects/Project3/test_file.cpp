/*
 * Rodrigo Luzuriaga
 * Project #3 - Question #2a
 * CSCI 110 - T/Th
 */

#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>

using namespace std;

main()
{
    //Variable declation
    ofstream myfile;
    string input;
    int input_size;
    long long i, a, b = 0;
    long long addition = 0, addition_of_totals, total;
    int placeholder = 0;
    vector<char> binary_char_vect;
    vector<int> binary_int_vect;

    myfile.open("output");

    cout << "Please enter the binary that you want to convert to decimal: ";
    cin >> input;

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
            myfile << "Woaw! A binary number can only contain 0's and 1's! You entered something other than that!!" << endl;
            return 0;
        }
        binary_int_vect.push_back(a);
    }

    myfile << endl;

    myfile << "This is the binary number backwards: ";

    for (i = 0; i <= input_size; i++)
    {
        myfile << binary_int_vect[i];
    }

    myfile << endl << endl;


    // for (i = 0; i <= input_size; i++)
    // {
    //     if (i == 0 && binary_int_vect[i] == 1)
    //     {
    //         a = 1;
    //         b = b + 1;
    //     }
    //     else if (i == 0 && binary_int_vect[i] == 0)
    //     {
    //         a = 0;
    //         b = b + 1;
    //     }
    //     else if (i == 1 && binary_int_vect[0] == 0)
    //     {
    //         a = 2;
    //         b = b * 2;
    //     }
    //     else if (i != 0 && binary_int_vect[i] == 1)
    //     {
    //         a = a * 2;
    //         b = b * 2;
    //     }
    //     else if (i != 0 && binary_int_vect[i] == 0)
    //     {
    //         a = a;
    //         b = b * 2;
    //     }

    //     placeholder++;


    //     cout << "This is the position in the loop (starts at 0): " << i << endl;
    //     cout << "This is the binary number in the position of the loop: " << binary_int_vect[i] << endl;
    //     cout << "This is a: " << a << endl;
    //     cout << "This is b: " << b << endl;
    //     cout << "This is the placeholder: " << placeholder << endl << endl << endl << endl;
    // }
    

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
				myfile << "Error 3" << endl;
			}
		}

		placeholder++;
		myfile << "This is the position in the loop (starts at 0): " << i << endl;
		myfile << "This is the binary number in the position of the loop: " << binary_int_vect[i] << endl;
		myfile << "This is a: " << a << endl;
		myfile << "This is b: " << b << endl;
		myfile << "This is the addition: " << addition << endl;
		myfile << "This is the placeholder: " << placeholder << endl << endl << endl << endl;
	}





/*


    if (binary_int_vect.back() == 1)
    {
        addition = 1;
        total = addition;
        addition_of_totals = 1;
        placeholder = 1;
    }
    else if (binary_int_vect.back() == 0)
    {
        addition = 1;
        total = 0;
        addition_of_totals = 0;
        placeholder = 1;
    }


    binary_int_vect.erase(binary_int_vect.back());


    input_size--; //Using .back() to get the last element of the vector so need to start the loop by subtracting 1 from input_size
    // cout << "Input size after the second subtraction: " << input_size << endl;


    for (i = input_size; i >= 0; i--)
    {
        if (binary_int_vect.back() == 1)
        {
            addition = addition * 2;
            total = addition;
            addition_of_totals = 1;
            placeholder = placeholder * 2;
        }
        else if (binary_int_vect.back() == 0)
        {
            addition = 0;
            total = addition;
            addition_of_totals = addition;
            placeholder = placeholder * 2;
        }

        binary_int_vect.erase(binary_int_vect.back());
    }




    for (i = input_size; i >= 0; i--)
    {
        if (binary_int_vect[i] == 1 && binary_int_vect[i++] == 1)
        {
            total = addition * 2;
            addition = total;
            addition_of_totals = addition_of_totals + addition;
        }
        else if (binary_int_vect[i] == 1 && binary_int_vect[i++] == 0)
        {
            if (binary_int_vect.size() == )
        }
    }
    */

}
