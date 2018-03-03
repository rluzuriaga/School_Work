/*
Project 4 Problem 1 Part 1
Bubblesort
File Name: source.cpp
Luzuriaga, Rodrigo
Hanbali, Jonathan
Zhang, Yingying
Date:5/23/2016
Compiler: Microsoft Visual C++ 2010
*/


#include<iostream>//include iostream
#include<ctime>//include ctime
using namespace std;//using namespace std

void bubblesort(int ar[], int n); //void function for bubblesort array with 2 integer param

void bubblesort(int ar[],int n) //bubblesort function with 2 integer param
{	
	cout<<"Bubble sorted array"<<endl; //show output
	for( int i=0;i<n;i++) //for loop
	{
		for (int j=i+1; j<n; j++)
		{
			if (ar[i]>ar[j]) //swap
			{
				int temp;//initializing integer variable temp
				temp = ar[i];//assign value from ar array on position i to temp integer
				ar[i]=ar[j];//store value from ar array on position j to array ar on position i
				ar[j] = temp;//store value of temp to ar array on position j
			}
			else
			{
				ar[i] = ar[i]; //stay the same
			}
		}
	cout<<ar[i]<<" "; //output the sorted array
	}
cout<<endl;	//new line
}

int main()//main function
{
	int arr[25]; //declare an array with size 25
	int arrdata[50]; //declare an array with size 50
	srand(time(0)); //each time the random numbers will be different

	cout<<"25 Random Integers"<<endl; 

	for (int i=0; i<25; i++) //for loop to randomly generate 20 positive integers
	{
		arr[i] = rand()%100; //random positive integers less than 100
		cout<<arr[i]<<" "; //output 25 random integers in array
	}
	cout<<endl; //new line
	bubblesort(arr,25); //call bubblesort function
	cout<<endl; //new line


	cout<<"Please enter the integers, Enter -1 to stop"<<endl; //ask the user to input the integers
	int number = 0;//declare an variable
	int i = 0;//declare an variable

	while(number != -1) //while loop to fill the integers into the array
	{
		cin>>number; //input the number
		arrdata[i]=number; 
		i++;
	}

	bubblesort(arrdata,i-1);  //call bubblesort function
	cout<<endl; //new line

//	system("PAUSE"); //to keep debug windows from closing itself
	return 0;
}