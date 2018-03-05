/*
Project #4 problem No. 3
File Name: CapitalDetector.cpp
Name: 
Hanbali, Jonathan
Luzuriaga, Rodrigo
Zhang, Yingying
Date: 5/26/2016
Compiler: Microseof Visual Studio Express 2012
*/

#include<iostream> //including iostream 
#include<fstream> //including fstream
using namespace std; //using namespace std 

int main() //main function
{
char string[200]; //creating a character array string with a size of 200
ofstream outfile; //initiating a ofstream outputfile
outfile.open("log.txt"); //open an outputfile log.txt

 
cout << "Please enter the sentence" <<endl; //ask the user to enter the sentence
gets_s(string); //get the input from the user and store it inside the array

outfile << "Your sentence is " << string << "\n" ; //send the sentence to the text file

//capitial letter is from 65-90
for(int i=0; i<strlen(string); i++) //for loop to check the entire array
{
	//cehck if the first letter is cap
	if(i==0) //when the position is 0
	{ 
		// if letter is cap
		if((string[i] >= 65 && string[i]<=90)) //if the first letter fall under this range
		{
			string[i] = string[i]; //the character remain the same
		}
		else
		{
			outfile << "First letter error has been fixed\n"; //send log to text file
			string[i] = string[i]-32; //change the character from lower case to upper case
		}
	}
	else if(string[i-2]==46 && string[i-1]==32)//if the character before alphabet is . and space
	{
		if(string[i] >= 65 && string[i]<=90) //check if the character is upper case character
		{
			string[i] = string[i]; //if the character is an uppercase character, then the character will remain the same
		}
		else
		{
			outfile << "After space lower case has been fixed at position " << i << "\n"; //send the log to the text file
			string[i] = string[i] -32;//change the letter into uppercase
		}
	}
	else
	{
		if(string[i]>=65 && string[i]<=90)//if the character at i is capital
		{
			string[i] = string[i]+32;//change the character into lowercase
			outfile << "Capital to lower case has been fixed at position " << i << "\n" ; //send the log to the text file
		}
		else
		{
			string[i] = string[i];//or else the character at i remain the same
		}
	}
}

cout<<"\nThe correct sentence is: "<<endl; //show the output the correct sentence is:
cout<<string<<endl; //show the sentence

outfile << "\nAfter fixing, your sentence become" << string << "\n" ; //send the log to the text file

outfile.close();//close the textfile

//system("PAUSE");//pause the screen

return 0;//return 0

}

