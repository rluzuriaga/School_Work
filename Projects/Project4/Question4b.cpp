/*
 * Rodrigo Luzuriaga
 * Project #4 - Question #4b
 * CSCI 110 - T/Th
 */
 
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

/*
 * Two functions in this program to show how it works with files and also with user input.
 */

void SpaceCorrector_File()
{
    //Variable declaration
    ifstream original_file;
    ofstream fixed_file;
    string text_holder_og, text_modified_1, final_text;
    int i, j = 1, text_size;
    int counter = 0; // Only for testing.
    
    
    original_file.open("files/United_File");
    fixed_file.open("files/Fixed_Spaces_File");
    
    
    getline(original_file, text_holder_og);
    
    text_size = text_holder_og.size();
    
    for  (i = 0; i < text_size; i++)
    {
        if (text_holder_og[i] == ' ')
        {
            if (text_holder_og[j] != ' ')
            {
                text_modified_1 = text_modified_1 + text_holder_og[i];
            }
            else // Only for testing purposes.
            {
                counter++;
            }
        }
        else
        {
            text_modified_1 = text_modified_1 + text_holder_og[i];
        }
        j++;
    }
    
    
    text_size = text_modified_1.size();
    
    for (i = 1; i < text_size; i++) // This for loop is only here to fix the error of having a space at the start of the new file.
    {
        if (text_modified_1[0] != ' ')
        {
            final_text = final_text + text_modified_1[i];
        }
        else
        {
            final_text = final_text + text_modified_1[i];
        }
    }
    
    
    // cout << "OG text: " << endl << text_holder_og << endl << endl;
    // cout << "New text: " << endl << final_text << endl << endl;
    // cout << "This is the counter: " << counter << endl;
    
    
    fixed_file << final_text << "\n";
    
    
    original_file.close();
    fixed_file.close();
}


string SpaceCorrector_cin(string input)
{
    //Variable declaration
    int i, j = 1, size;
    string output;
    
    size = input.size();
    
    for (i = 0; i < size; i++)
    {
        if (input[i] == ' ')
        {
            if (input[j] != ' ')
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

string SpaceCorrector_cin_test(string input)
{
    //Variable declaration
    int i, j = 1, size;
    string output;
    // string input;
    
    // cout << "Please enter a string: ";
    // getline(cin, input);
    
    size = input.size();
    
    for (i = 0; i < size; i++)
    {
        if (input[i] == ' ')
        {
            if (input[j] != ' ')
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
    string user_decision;
    
    cout << "Please enter \"input\" or \"file\" to know what you want the program to work from: ";
    cin >> user_decision;
    
    // if (user_decision == "input")
    // {
       // cout << "Please enter a string: ";
       // getline(cin, input);
        
       // size = input.size();

       // // cout << "This is how many spaces are in the string originally: " << counter << endl;
        
       // output = SpaceCorrector_cin(input);
        
       // cout << "This is the string fixing the spaces: " << endl << output << endl;
        
       // size = output.size();
       // counter = 0;
       // for (i = 0; i < size; i++)
       // {
       //     if (output[i] == ' ')
       //     {
       //         counter++;
       //     }
       // }
    // }
    if (user_decision == "input")
    {
        cout << "Please enter a string: ";
        getline(cin, input); //Doesn't let the user ionput
        SpaceCorrector_cin_test(input);
    }
    else if (user_decision == "file")
    {
        SpaceCorrector_File();
        cout << "File was created." << endl;
    }
    else if (user_decision != "input" || user_decision != "file")
    {
        cout << "Error 1." << endl;
    }
    else
    {
        cout << "Error 2." << endl;
    }
    
}














