/*
	Rodrigo Luzuriaga
	Project #2 - Question #1
	CSCI 110 T/TH
	5/3/2016
*/

#include <iostream>

using namespace std;

main()
{
	//Variable creation.
	int ages [] = {4, 17, 79, 52, 56, 19, 21, 22, 3, 12, 30, 33, 81, 99, 85, 28, 24, 25, 24, 26, 27, 20, 44, 32, 35, 24, 39, 43, 41, 46, 56, 62, 22, 20, 69, 18};
	int infant = 0, young = 0, middle_aged = 0, old = 0, really_old = 0;
	int array_length = sizeof(ages) / sizeof(int);
	int array_position = 0;
	
	
	
	while (array_position <= array_length)
	{
		if (ages[array_position] >= 1 && ages[array_position] <= 16)
		{
			// cout << "Test" << endl;  // just added this line to test uncomment to see why I added the infant -= 1 at the end
			infant++;
		}
		else if (ages[array_position] > 16 && ages[array_position] <= 29)
		{
			young++;
		}
		else if (ages[array_position] > 29 && ages[array_position] <= 55)
		{
			middle_aged++;
		}
		else if (ages[array_position] > 55 && ages[array_position] <= 75)
		{
			old++;
		}
		else if (ages[array_position] > 75)
		{
			really_old++;
		}
		else
		{
			cout << "Something went wrong!!!" << endl;
		}
		
		array_position++;
	}
	
	infant -= 1; // the loop was using an extra "infant++" so I am subracting it here. Honestly not sure why the loop was doing this but this was a simple fix.
	
	cout << array_length << " people in the census." << endl;
	cout << "Infant population: " << infant << endl;
	cout << "Young population: " << young << endl;
	cout << "Middle aged population: " << middle_aged << endl;
	cout << "Old population: " << old << endl;
	cout << "Really old population: " << really_old << endl;

}