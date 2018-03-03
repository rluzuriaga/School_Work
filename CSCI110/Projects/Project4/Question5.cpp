/*
Project #4 problem No. 5
File Name: BinarySearch.cpp
Name: 
Hanbali, Jonathan
Luzuriaga, Rodrigo
Zhang, Yingying
Date: 5/26/2016
Compiler: Microseof Visual Studio Express 2012
*/

#include<iostream>//including iostream
#include<fstream>//including fstream
#include<string>//including string
#include<cctype>//including cctype
using namespace std;//using namespace std

int binarysearch(int numbers[27],int low, int high,int value);
//initializing a function binarysearch with a parameters of 4 int

int main()//main function
{
	int n;//creating an integer variable n
	cout<<"Please enter a number"<<endl;//ask the user to enter a number
	cin>>n;//get the input and stor it into n
	int lower=0;//creating a new integer variable lower with a value of 0
	int upper = 26;//creating a new integer variable upper with the value of 26
	int random_number1[27] = {0};//creating an integer array random_number with the size of 27 and initial value of 0
	int posted_data[27] = {0};//creating an integer array posted_data with the size of 27 and initial value of 0

	ifstream in_file; //creating an in_file file stream
	in_file.open("random.txt");//open file random.txt
	if(in_file.fail())//if there's a failure in opening the file
	{
		cout<<"Error"<<endl;//show an error output
		return 0;//return 0
	}
	else
	{
		
		for(int i= 0; i < 27; i++) //if there's no error, run a for loop
			{
				in_file >> random_number1[i];//store the integer from in_file to random_number1 array position i
			}
	}
	in_file.close();//close the file after storing completed

	in_file.open("posteddata.txt");//open file posteddata.txt
	if(in_file.fail())//if there's an error in openning the file
	{
		cout<<"Error"<<endl;//show an error message
		return 0;//return 0
	}
	else
	{
		
		for(int i= 0; i < 27; i++)//else run a for loop
			{
				in_file >> posted_data[i];//store the integer from in_file to posted_data array position i
			}
	}

	cout<<"The position of this integer in random number array is "<<binarysearch(random_number1,lower, upper, n)<<endl;
	//show the output, and call binarysearch function
	cout<<"The position of this integer in posted data array is "<<binarysearch(posted_data,lower, upper, n)<<endl;
	//show the output, and call binarysearch function

	system("pause");//prevent the screen to close

	return 0;//return 0
}

int binarysearch(int numbers[27],int low, int high, int value)//binarysearch function with 4 integers as parameter
{
	char input;//creating an input character
	int mid=(low + high)/2;//creating an integer mid, and store the value from low+high devided by 2
	
	if(low>high)//if low is bigger than high
	{
		cout<<"\nThe number is not found"<<endl;//show that the number could not be found
		return -1;//return -1 to show that there's an error
	}
	else
	{
	
		if(numbers[mid] == value)//if the value in number array position middle equals the value that the user want to search
		{
			cout<<"\nFound it"<<endl;//show an output found it
			return mid;//return the value of integer mid
		}

		if(numbers[mid]<value)//if the value in number array position mid is lower than value that user want to search
		{ 
			return binarysearch(numbers,mid+1, high,value);//return to binarysearch function and change low param to mid+1 
		}
		else//else
		{
			return binarysearch(numbers, low, mid-1,value);//return to binarysearch function and change the high param to mid-1
		}
	}
}