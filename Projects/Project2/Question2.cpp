/*
	Rodrigo Luzuriaga
	Project #2 - Question #2
	CSCI 110 T/TH
	Due - 5/3/2016
*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

main()
{
	//Variable creation.
	int age;
	int max, min;
	int addition_of_ages = 0, addition_of_ages_standard_deviation = 0; 
	double total;
	int counter = 1;
	int vect_keeper = 0, i = 0;
	double mean, sigma, sigma_sq;
	int placeholder, placeholder2;
	vector<int> all_ages_vect;
	vector<int> standard_deviation_vect;


	cout << "Please insert one age at a time. (Press Enter after each age. If no more ages please enter 0 then Enter): " << endl;
	
	cin >> age;
	min = age;
	max = age;
	
	
	while (age != 0)
	{
		all_ages_vect.push_back(age); //This line adds all the ages inputed into the end of the vector.
		
		if (age >= max)
		{
			max = age;
			min = min;
		}
		else if (age <= min)
		{
			min = age;
			max = max;
		}
		else if (age == 0)
		{
			max = max;
			min = min;
		}
		
		addition_of_ages = addition_of_ages + age;
		cin >> age;
		total = addition_of_ages;
		
		counter++;
		vect_keeper++;
	}
	
	all_ages_vect.pop_back();
	counter--;
	vect_keeper--;
	
	
	mean = total / counter;
	cout << "This is the average before the standard deviation: " << mean << endl;
	
	
	while (i <= vect_keeper)
	{
		placeholder = all_ages_vect[i];
		if (placeholder < mean)
		{
			placeholder2 = mean - placeholder;
			placeholder2 = placeholder2 * placeholder2;
		}
		else if (placeholder > mean)
		{
			placeholder2 = placeholder - mean;
			placeholder2 = placeholder2 * placeholder2;
		}
		else
		{
			placeholder2 = 0;
		}
		
		standard_deviation_vect.push_back(placeholder2);
		
		i++;
	}
	
	i = 0;
	
	while (i <= vect_keeper)
	{
		placeholder = standard_deviation_vect[i];
		addition_of_ages_standard_deviation = addition_of_ages_standard_deviation + placeholder;
		
		i++;
	}
	
			
	 cout << "Min inputs: " << min << endl;
	 cout << "Max inputs: " << max << endl;
	
	sigma_sq = addition_of_ages_standard_deviation / vect_keeper;
	cout << "Sigma squared: " << sigma_sq << endl;
	
	sigma = sqrt(sigma_sq);
	cout << "This is  sigma: " << sigma << endl;
	
	
}
