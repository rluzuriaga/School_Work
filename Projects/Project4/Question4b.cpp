/*
 * Rodrigo Luzuriaga
 * Project #4 - Question #4b
 * CSCI 110 - T/Th
 */
 
#include <iostream>
#include <string>

using namespace std;

string Space_Corrector(string input)
{
    //Variable declaration
    int i, j = 1, size;
    string output;
    
    size = input.size();
    
    for (i = 0; i < size; i++)
    {
        if (input[i] == ' ')
        {
            if (input[j] == ' ')
            {
            	cout << "There are " << i << " spaces in the function before the output." << endl;
            }
            else
            {
            	output = output + input[i];
            }
        }
        else
        {
            output = output + input[i];
        }
        
        j++;
    }
    
    return output;
}

main()
{
    //Variable declaration
    string input;
    string output;
    int i, size, counter = 0;
    
    cout << "Please enter a string: ";
    getline(cin, input);
    
    size = input.size();
    
    for (i = 0; i < size; i++)
    {
        if (input[i] == ' ')
        {
            counter++;
        }
    }
    
    cout << "This is how many spaces are in the string originally: " << counter << endl;
    
    output = Space_Corrector(input);
    
    cout << "This is the string fixing the spaces: " << output << endl;
    
    size = output.size();
    counter = 0;
    for (i = 0; i < size; i++)
    {
        if (output[i] == ' ')
        {
            counter++;
        }
    }
    
    cout << "This is the fixed number of spaces from the output: " << counter << endl;
    
}