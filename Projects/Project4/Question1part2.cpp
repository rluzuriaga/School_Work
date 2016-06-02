/*
Project 4 Problem 1 Part 2
Selection Sort
File Name: source.cpp
Hanbali, Jonathan
Luzuriaga, Rodrigo
Zhang, Yingying
Date:5/23/2016
Compiler: Microsoft Visual C++ 2010
*/


#include<iostream>//include iostream
#include<ctime>//include ctime
using namespace std;//using namespace std

void selectionsort(int ar[], int n); //void function for selection sort array with 2 integer param

void selectionsort(int ar[], int n) //selection sort function with 2 integer param
{	
	int temp_min, temp;//initializing integer variables temp_min and temp
	cout<<"Selection sorted array"<<endl; //show selection sorted array
	for ( int i=0; i<n; i++) //for loop
	{
		temp_min = i; //declare temporary smallest integer
		for(int j=i+1; j<n; j++)//find the smallest integer in the array
		{	
			if (ar[j]<ar[temp_min]) //if the value on ar array on position j is less than the value of ar array on position temp_min 
			{
				temp_min =j;//change the temp_min value to j
			}
		}
			if(temp_min >i) //swap if the smallest integer is greater 
			{
				temp = ar[i];//assign the value stored on array ar on position i to temp 
				ar[i] = ar[temp_min];//assign value on array ar on position temp_min to array ar on position i
				ar[temp_min] = temp;//assign the value of temp to array ar on position temp_min
			}
		
		cout<<ar[i]<<" "; //output the sorted array
	}
	
}


int main()//main function
{
	int arr[25]; //declare an array with size 25
	int arrdata[50]; //declare an array with size 50
	srand(time(0)); //each time the random numbers will be different

	cout<<"25 Random Numbers"<<endl; //show output

	for (int i=0; i<25; i++) //for loop to randomly generate 25 positive integers
	{
		arr[i] = rand()%100; //random positive integers less than 100
		cout<<arr[i]<<" "; //output random integers in array
	}
	cout<<endl; //new line
	selectionsort(arr,25); //call selectionsort function
	cout<<endl; //new line


	cout<<"Please enter the integers, Enter -1 to stop"<<endl; //ask the user to input the integers
	int number = 0;//declare an variable
	int i = 0;//declare an variable

	while(number != -1) //while loop to fill the integers into the array
	{
		cin>>number; //input the number
		arrdata[i]=number; //store the value to arrdata on position i
		i++;//add 1 to i
	}

	selectionsort(arrdata, i-1); //call selectionsort funtion
	cout<<endl; //new line

	system("PAUSE"); //to keep debug windows from closing itself
	return 0;//return 0
}
		
