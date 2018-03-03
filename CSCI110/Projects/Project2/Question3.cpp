/*
	Rodrigo Luzuriaga
	Project #2 - Question #3
	CSCI 110 T/TH
	Due - 5/3/2016
*/

#include <iostream>

using namespace std;

main()
{
	//variable creation.
	int hours, overtime, total_hours;
	double pay;
	int total_regular_pay;
	double total_overtime_pay;
	int total_earned;
	
	
	cout << "Please enter the hours worked: ";
	cin >> hours;
	
	cout << "Please enter your pay rate: ";
	cin >> pay;
	
	
	if (hours >= 40)
	{
		overtime = hours - 40;
		hours = 40;
		total_hours = hours + overtime;
		total_regular_pay = hours * pay;
		total_overtime_pay = overtime * (pay / 2);
		total_earned = total_regular_pay + total_overtime_pay;
	}
	else
	{
		overtime = 0;
		total_hours = hours + overtime;
		total_regular_pay = hours * pay;
		total_overtime_pay = 0;
		total_earned = total_regular_pay + total_overtime_pay;
	}
	
	
	cout << "Regular hours: " << hours << endl;
	cout << "Overtime: " << overtime << endl;
	cout << "Total hours: " << total_hours << endl;
	
	cout << "Regular pay: " << total_regular_pay << endl;
	cout << "Overtime pay: " << total_overtime_pay << endl;
	cout << "Total earned: " << total_earned << endl;
	
}