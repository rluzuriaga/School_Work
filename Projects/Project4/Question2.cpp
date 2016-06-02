/*
Project #4 problem No. 2
File Name: menu.cpp
Name: 
Hanbali, Jonathan
Luzuriaga, Rodrigo
Zhang, Yingying
Date: 5/26/2016
Compiler: Microseof Visual Studio Express 2012
*/

#include<iostream>//include iostream
#include<string>//include string
#include<iomanip>//include iomanip
#include<cstdlib>//include cstdlib
using namespace std;//using namespace std

int main()//main function
{
	string inputString, option2;//creating string object inputString and option2
	cout << "conversion program" << endl;//show an output conversion program
	cout << "Please enter 'options' to see the conversion that we could do, \nor 'exit' to quit the program" << endl;//ask the user to enter one of the option
	cin >> inputString;//store the input from user input to inputString

	if (inputString == "options" || inputString == "option")//if the inputString equals to options or option
	{
		cout << "\nPlease enter 'miles' to convert from miles to kilometers or \nenter 'degf' to convert farenheit to celcius" << endl;
		//ask the user to enter the conversion that they want to do
		cin >> option2;
		//store the input into option2

		if(option2 == "miles")//if the option2 string equals to miles
		{
			float miles;//initializing a float variable miles
			float kilometer;//initializing a float variable kilometer
			cout << "\nPlease input the mileage that you want to convert\n";
			//show an output to ask user to input a value
			cin >> miles;//store the user inputed value to miles
			kilometer = (miles * 1.609);//assign miles*1.609 to kilometer
			cout << "\nThe kilometer value of " << miles << " miles is " << setprecision(2) << fixed << kilometer << " km" << endl;
			//show the output and set the precision to fixed and 2 numbers after commas
		
			//system("PAUSE");//prevent the screen from closing
		}
		else if(option2 == "degf")//else if the option2 string is equals to degf
		{
			float farenheit;//initializing a float variable farenheit
			float celcius;//initializing a float variable celcius
			cout << "\nPlease input the farenheit value that you want to convert\n";//ask the user to input a value
			cin >> farenheit;//store the user inputted value to farenheit
			celcius = (((farenheit-32)*5)/9);//do calculation
			cout << "\nThe celcius value of " << farenheit << " degree farenheit is " << setprecision(2) << fixed << celcius << " degree celcius" << endl;
			//show the output

			//system("PAUSE");//prevent the screen from closing

		}
	}
	else if(inputString == "exit")//if the inputString string is exit
	{
		cout << "\nGood Bye, thank you for using our program" << endl;//show an output
		return 0;//return 0
	}

	
}