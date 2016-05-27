/*
 * Rodrigo Luzuriaga
 * Project #4 - Question #4b
 * CSCI 110 - T/Th
 */
 
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
 * Two functions in this program to show how it works with files and also with user input.
 */

// SpaceCorrector_File()
main()
{
    //Variable declaration
    ifstream original_file;
    ofstream fixed_file;
    string text_holder_og, text_holder_modified;
    int i, j = 1, text_size;
    int counter = 0; // Only for testing.
    string
    
    
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
                text_holder_modified = text_holder_modified + text_holder_og[i];
            }
            else // Only for testing purposes.
            {
                counter++;
            }
        }
        else
        {
            text_holder_modified = text_holder_modified + text_holder_og[i];
        }
        j++;
    }
    
    
    
    cout << "OG text: " << endl << text_holder_og << endl << endl;
    cout << "New text: " << endl << text_holder_modified << endl << endl;
    cout << "This is the counter: " << counter << endl;
    
    original_file.close();
    fixed_file.close();
}


// string SpaceCorrector_cin(string input)
// {
//     //Variable declaration
//     int i, j = 1, size;
//     string output;
    
//     size = input.size();
    
//     for (i = 0; i < size; i++)
//     {
//         if (input[i] == ' ')
//         {
//             if (input[j] != ' ')
//             {
//             	output = output + input[i];
//             }
//         }
//         else
//         {
//             output = output + input[i];
//         }
        
//         j++;
//     }
    
//     return output;
// }

// main()
// {
//     //Variable declaration
//     string input;
//     string output;
//     int i, size, counter = 0;
    
//     cout << "Please enter a string: ";
//     getline(cin, input);
    
//     size = input.size();
    
//     for (i = 0; i < size; i++)
//     {
//         if (input[i] == ' ')
//         {
//             counter++;
//         }
//     }
    
//     // cout << "This is how many spaces are in the string originally: " << counter << endl;
    
//     output = Space_Corrector(input);
    
//     cout << "This is the string fixing the spaces: " << endl << output << endl;
    
//     size = output.size();
//     counter = 0;
//     for (i = 0; i < size; i++)
//     {
//         if (output[i] == ' ')
//         {
//             counter++;
//         }
//     }
    
//     // cout << "This is the fixed number of spaces from the output: " << counter << endl;
    
// }