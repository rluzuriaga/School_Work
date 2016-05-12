/*
    Rodrigo Luzuriaga
    Project #3 - Question #2
    CSCI 110 - T/Th
*/

#include <iostream>
#include <vector>


using namespace std;

main()
{
	//variable declaration
	int decimal_input, og_decimal_input, decimal_remainder;
	int counter = 0, i, placement, a;
	int vector_placer1, vector_placer2, vector_placer3, vector_placer4;
	string str = "0000 0000 0000 0000 0000 0000 0000 0000";
	vector<int> binary;
	
	
	cout << "Please enter the decimal number you want to convert: ";
	cin >> decimal_input;
	
	// og_decimal_input = decimal_input;
	
	while (decimal_input != 0)
	{
		decimal_remainder = decimal_input % 2;
		decimal_input = decimal_input / 2;
		binary.push_back(decimal_remainder);
		counter++;
	}
	
	counter--;
	cout << "This is the counter after the subtraction: " << counter << endl;
	
	if (counter > 0 && counter <= 4)
	{
		a = 0;
		cout << "a = 0" << endl;
	}
	else if (counter > 4 && counter <= 8)
	{
		a = 2;
		cout << "a = 2" << endl;
	}
	else if(counter > 8 && counter <= 12)
	{
		a = 3;
		cout << "a = 3" << endl;
	}
	else if (counter > 12 && counter <= 16)
	{
		a = 4;
		cout << "a = 3" << endl;
	}
	
	placement = 39 - counter - a;
	
	for (i = 0; i < placement; i++)
	{
		cout << str[i];
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "This is your binary number: " << endl;
	
	if (counter == 3)
	{
		vector_placer1 = counter;
		vector_placer2 = counter - 1;
		vector_placer3 = counter - 2;
		vector_placer4 = counter - 3;
		
		cout << "0000 0000 0000 0000 0000 0000 0000 ";
		
		while (counter >= 0)
		{
			cout << binary[vector_placer1];
			cout << binary[vector_placer2];
			cout << binary[vector_placer3];
			cout << binary[vector_placer4];
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
	}
	else if (counter == 7)
	{
		vector_placer1 = counter;
		vector_placer2 = counter - 1;
		vector_placer3 = counter - 2;
		vector_placer4 = counter - 3;
		
		
		cout << "0000" << " " << "0000" << " " << "0000" << " " << "0000" << " " << "0000" << " " << "0000" << " ";
		
		while (counter >= 0)
		{
			cout << binary[vector_placer1];
			cout << binary[vector_placer2];
			cout << binary[vector_placer3];
			cout << binary[vector_placer4];
			cout << " ";
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
	}
	
	
	/*
	
	
	if (counter == 3 || counter == 7 || counter == 11 || counter == 15 || counter == 19 || counter == 23 || counter == 27 || counter == 31 || counter == 35 || counter == 39)
	{
		
		vector_placer1 = counter;
		vector_placer2 = counter - 1;
		vector_placer3 = counter - 2;
		vector_placer4 = counter - 3;
		
		
		while (counter >= 0)
		{
			cout << binary[vector_placer1];
			cout << binary[vector_placer2];
			cout << binary[vector_placer3];
			cout << binary[vector_placer4];
			cout << " ";
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
	}
	else if (counter == 4 || counter == 8 || counter == 12 || counter == 16 || counter == 20 || counter == 24 || counter == 28 || counter == 32 || counter == 36 || counter == 40)
	{
		
		vector_placer1 = counter - 1;
		vector_placer2 = counter - 2;
		vector_placer3 = counter - 3;
		vector_placer4 = counter - 4;
		
		
		cout << 0;
		
		while (counter >= 0)
		{
			cout << binary[vector_placer1];
			cout << binary[vector_placer2];
			cout << binary[vector_placer3];
			cout << " ";
			cout << binary[vector_placer4];
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
	}
	else if (counter == 5 || counter == 9 || counter == 13 || counter == 17 || counter == 21 || counter == 25 || counter == 29 || counter == 33 || counter == 37 || counter == 41)
	{
		vector_placer1 = counter - 2;
		vector_placer2 = counter - 3;
		vector_placer3 = counter - 4;
		vector_placer4 = counter - 5;
		
		
		cout << 00;
		
		while (counter >= 0)
		{
			cout << binary[vector_placer1];
			cout << binary[vector_placer2];
			cout << " ";
			cout << binary[vector_placer3];
			cout << binary[vector_placer4];
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
	}
	else if (counter == 6 || counter == 10 || counter == 14 || counter == 18 || counter == 22 || counter == 26 || counter == 30 || counter == 34 || counter == 38 || counter == 42)
	{
		vector_placer1 = counter - 3;
		vector_placer2 = counter - 4;
		vector_placer3 = counter - 5;
		vector_placer4 = counter - 6;
		
		
		cout << 000;
		
		while (counter >= 0)
		{
			cout << binary[vector_placer1];
			cout << " ";
			cout << binary[vector_placer2];
			cout << binary[vector_placer3];
			cout << binary[vector_placer4];
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
	}
	else
	{
		cout << "ERROR -- SOMETHING WENT WRONG IN THE IF STATEMENTS!!!!" << endl;
	}
	*/
	
	
	
	
	cout << endl;
	
} // end of main()	
	
	
	
/*	
	
	while (counter >= 0)
	{
		if (counter == 3 || counter == 7 || counter == 11 || counter == 15 || counter == 19 || counter == 23 || counter == 27 || counter == 31 || counter == 35 || counter == 39)
		{
			cout << binary[vector_placer1];
			cout << binary[vector_placer2];
			cout << binary[vector_placer3];
			cout << binary[vector_placer4];
			cout << " ";
			
			vector_placer1 -= 4;
			vector_placer2 -= 4;
			vector_placer3 -= 4;
			vector_placer4 -= 4;
			counter -= 4;
		}
		else if (counter == 4 || counter == 8 || counter == 12 || counter == 16 || counter == 20 || counter == 24 || counter == 28 || counter == 32 || counter == 36 || counter == 40)
		{
			cout << 0;
			cout <<
		}
		
		
		
	}
	
	cout << endl;
*/	
	
	
	
	
	
	








/*


vector_placer1 = counter;
vector_placer2 = counter - 1;
vector_placer3 = counter - 2;
vector_placer4 = counter - 3;

cout << "This is your binary number: " << endl;




while (counter >= 0)
{
	cout << binary[vector_placer1];
	cout << binary[vector_placer2];
	cout << binary[vector_placer3];
	cout << binary[vector_placer4];
	cout << " ";
	
	vector_placer1 -= 4;
	vector_placer2 -= 4;
	vector_placer3 -= 4;
	vector_placer4 -= 4;
	counter -= 4;
}


*/













