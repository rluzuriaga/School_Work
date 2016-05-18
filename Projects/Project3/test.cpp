/*
 * Rodrigo Luzuriaga
 * Project #3 - Question #3
 * CSCI 110 - T/Th
 */

#include <iostream>
#include <string.h>

using namespace std;

main()
{
    //Variable decleration
    string str_in;
    string str_new;
    int string_length;
    int vowel_count = 0, consonant_count = 0;
    int array[26] = {0};
    int i, j;
    int spacer = 0;


    cout << "Please enter the string: ";
    getline(cin, str_in);
    
    string_length = str_in.size();
    cout << "This is how many characters were inputed: " << string_length << endl;
    
    
    string_length--; //Makes string_length start from 0 from future uses
    // cout << string_length << endl; //Just to check
    
    for (i = 0; i <= string_length; i++)
    {
	if (str_in[i] == ' ')
	{
		spacer = i;
	}
	else
	{
		if (str_in[i] >= 65 && str_in[i] <= 90)
        	{
        	    str_in[i] = str_in[i] + 32;
        	}
		str_new = str_new + str_in[i];
	}
    }

    cout << "This should be the string (all lowercase): " << str_new << endl;
    string_length = str_new.size();
    //cout << "This is the new string length: " << string_length << endl;
    string_length--;

    for (i = 0; i <= string_length; i++)
    {
        for (j = 97; j < 123; j++)
        {
            if (str_new[i] == j)
            {
                array[j - 97]++;
                cout << "Array " << i << ": " << array[j - 97] << endl;
		j = 123;
            }
        }
    }
    
    
    for (i = 0; i < 26; i++)
    {
	    cout << "Array " << i << ": " << array[i] << endl;
    }
    
    // for (i = 0; i <= 5; i++)
    // {
    // 	for (j = )
    // }
}
