/*
 * Rodrigo Luzuriaga
 * Project #4 - Question #4a
 * CSCI 110 - T/Th
 */
 
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void FileUniter()
{
	//Variable declaration
	ifstream file1, file2, file3;
	ofstream united_file;
	string text;
	
	file1.open("files/file1");
	file2.open("files/file2");
	file3.open("files/file3");
	united_file.open("files/United_File");
	
	
	getline(file1, text);
	united_file << text << " ";
	
	getline(file2, text);
	united_file << text << " ";
	
	getline(file3, text);
	united_file << text << " \n";
	
	
	file1.close();
	file2.close();
	file3.close();
	united_file.close();
	
}

main()
{
	FileUniter();
}