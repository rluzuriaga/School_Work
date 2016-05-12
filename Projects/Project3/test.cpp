#include<iostream>

using namespace std;

int main()
{
	long bin, dec = 0, rem, num, base = 1;

	cout << "Enter the binary number(1s and 0s) : ";
	cin >> num;
	bin = num;
	while (num > 0)
	{
		rem = num % 10;
		dec = dec + rem * base;
		base = base * 2;
		num = num / 10;
	}
	cout << "The decimal equivalent of " << bin << " : " << dec << endl;
	return 0;
}




/*
	Rodrigo Luzuriaga
	Project #3 - Question #2a
	CSCI 110 - T/Th
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

main()
{
	//Variable declation
	string input;
	int input_size;
	int i, a;
	int addition, addition_of_totals, total;
	int placeholder = 0;
	vector<char> binary_char_vect;
	vector<int> binary_int_vect;

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
			cout << "Woaw! A binary number can only contain 0's and 1's! You entered something other than that!!" << endl;
			return 0;
		}
		binary_int_vect.push_back(a);
	}

	cout << endl;

	cout << "This is the binary number backwards: ";

	for (i = 0; i <= input_size; i++)
	{
		cout << binary_int_vect[i];
	}

	cout << endl << endl;


	for (i = 0; i <= input_size; i++)
	{
		if (i == 0 && binary_int_vect[i] == 1)
		{
			a = 1;
		}
		else if (i == 0 && binary_int_vect[i] == 0)
		{
			a = 0;
		}
		else if (i == 1 && binary_int_vect[0] == 0)
		{
			a = 2;
		}
		else if (i != 0 && binary_int_vect[i] == 1)
		{
			a = a * 2;
		}
		else if (i != 0 && binary_int_vect[i] == 0)
		{
			a = a;
		}

		placeholder++;


		cout << "This is the position in the loop (starts at 0): " << i << endl;
		cout << "This is the binary number in the position of the loop: " << binary_int_vect[i] << endl;
		cout << "This is a: " << a << endl;
		cout << "This is the placeholder: " << placeholder << endl << endl << endl << endl;
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










