/*
	Rodrigo Luzuriaga
	Project #3 - Question #3
	CSCI 110 - T/Th
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>

using namespace std;

main()
{
	string str;
	int string_length;
	int vowel_count = 0, consonant_count = 0;
	map <char, int> letter_map; //The map's key type will al be in capital letters but will contain how many times both capital and lower case letters are used.
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
	
	cout << "Please enter a string: ";
	getline(cin, str);
	
	string_length = str.length();
	
	
	for (int placeholder = 0; placeholder < string_length; placeholder++)
	{
		if (str[placeholder] == 'A' || str[placeholder] == 'a' || str[placeholder] == 'E' || str[placeholder] == 'e' || str[placeholder] == 'I' || str[placeholder] == 'i' || str[placeholder] == 'O' || str[placeholder] == 'o' || str[placeholder] == 'U' || str[placeholder] == 'u')
		{
			vowel_count++;
			
			if (str[placeholder] == 'A' || str[placeholder] == 'a')
			{
			    if (a == 0)
			    {
			        a++;
			        letter_map["A"] = a;
			    }
			    else
			    {
			       
				letter_map.insert["A"] 
			    }
			}
			else if (str[placeholder] == 'E' || str[placeholder] == 'e')
			{
			    if (e == 0)
			    {
			        e++;
			        letter_map["E"] = e;
			    }
			    else
			    {
			        letter_map.insert["E"] = e++;
			    }
			}
			else if (str[placeholder] == 'I' || str[placeholder] == 'i')
			{
			    if (i == 0)
			    {
			        i++;
			        letter_map["I"] = i;
			    }
			    else
			    {
			        letter_map.insert["I"] = i++;
			    }
			}
			else if (str[placeholder] == 'O' || str[placeholder] == 'o')
			{
			    if (o == 0)
			    {
			        o++;
			        letter_map["O"] = o;
			    }
			    else
			    {
			        letter_map.insert["O"] = o++;
			    }
			}
			else if (str[placeholder] == 'U' || str[placeholder] == 'u')
			{
			    if (u == 0)
			    {
			        u++;
			        letter_map["U"] = u;
			    }
			    else
			    {
			        letter_map.insert["U"] = u++;
			    }
			}
		}
		else if (str[placeholder] == ' ' || str[placeholder] == '.' || str[placeholder] == ',' || str[placeholder] == '?' || str[placeholder] == '!' || str[placeholder] == '"' || str[placeholder] == '\'' || str[placeholder] == ';' || str[placeholder] == ':' || str[placeholder] == '<' || str[placeholder] == '>' || str[placeholder] == '/' || str[placeholder] == '-' || str[placeholder] == '_' || str[placeholder] == '`' || str[placeholder] == '(' || str[placeholder] == ')' || str[placeholder] == '[' || str[placeholder] == ']' || str[placeholder] == '{' || str[placeholder] == '}' || str[placeholder] == '\\' || str[placeholder] == '|' || str[placeholder] == '*' || str[placeholder] == '&' || str[placeholder] == '^' || str[placeholder] == '%' || str[placeholder] == '$' || str[placeholder] == '#' || str[placeholder] == '@' || str[placeholder] == '+' || str[placeholder] == '=')
		{
			vowel_count = vowel_count;
			consonant_count = consonant_count;
		}
		else
		{
			consonant_count++;
			
			if (str[placeholder] == 'B' || str[placeholder] == 'b')
			{
			    if (b == 0)
			    {
			    	b++;
			        letter_map["B"] = b;
			    }
			    else
			    {
			        letter_map.insert["B"] = b++;
			    }
			}
			else if (str[placeholder] == 'C' || str[placeholder] == 'c')
			{
			    if (c == 0)
			    {
			        c++;
			        letter_map["C"] = c;
			    }
			    else
			    {
			        letter_map.insert["C"] = c++;
			    }
			}
			else if (str[placeholder] == 'D' || str[placeholder] == 'd')
			{
			    if (d == 0)
			    {
			        d++;
			        letter_map["D"] = d;
			    }
			    else
			    {
			        letter_map.insert["D"] = d++;
			    }
			}
			else if (str[placeholder] == 'F' || str[placeholder] == 'f')
			{
			    if (f == 0)
			    {
			        f++;
			        letter_map["F"] = f;
			    }
			    else
			    {
			        letter_map.insert["F"] = f++;
			    }
			}
			else if (str[placeholder] == 'G' || str[placeholder] == 'g')
			{
			    if (g == 0)
			    {
			        g++;
			        letter_map["G"] = g;
			    }
			    else
			    {
			        letter_map.insert["G"] = g++;
			    }
			}
			else if (str[placeholder] == 'H' || str[placeholder] == 'h')
			{
			    if (h == 0)
			    {
			        h++;
			        letter_map["H"] = h;
			    }
			    else
			    {
			        letter_map.insert["H"] = h++;
			    }
			}
			else if (str[placeholder] == 'J' || str[placeholder] == 'j')
			{
			    if (j == 0)
			    {
			        j++;
			        letter_map["J"] = j;
			    }
			    else
			    {
			        letter_map.insert["J"] = j++;
			    }
			}
			else if (str[placeholder] == 'K' || str[placeholder] == 'k')
			{
			    if (k == 0)
			    {
			        k++;
			        letter_map["K"] = k;
			    }
			    else
			    {
			        letter_map.insert["K"] = k++;
			    }
			}
			else if (str[placeholder] == 'L' || str[placeholder] == 'l')
			{
			    if (l == 0)
			    {
			        l++;
			        letter_map["L"] = l;
			    }
			    else
			    {
			        letter_map.insert["L"] = l++;
			    }
			}
			else if (str[placeholder] == 'M' || str[placeholder] == 'm')
			{
			    if (m == 0)
			    {
			        m++;
			        letter_map["M"] = m;
			    }
			    else
			    {
			        letter_map.insert["M"] = m++;
			    }
			}
			else if (str[placeholder] == 'N' || str[placeholder] == 'n')
			{
			    if (n == 0)
			    {
			        n++;
			        letter_map["N"] = n;
			    }
			    else
			    {
			        letter_map.insert["N"] = n++;
			    }
			}
			else if (str[placeholder] == 'P' || str[placeholder] == 'p')
			{
			    if (p == 0)
			    {
			        p++;
			        letter_map["P"] = p;
			    }
			    else
			    {
			        letter_map.insert["P"] = p++;
			    }
			}
			else if (str[placeholder] == 'Q' || str[placeholder] == 'q')
			{
			    if (q == 0)
			    {
			        q++;
			        letter_map["Q"] = q;
			    }
			    else
			    {
			        letter_map.insert["Q"] = q++;
			    }
			}
			else if (str[placeholder] == 'R' || str[placeholder] == 'r')
			{
			    if (r == 0)
			    {
			        r++;
			        letter_map["R"] = r;
			    }
			    else
			    {
			        letter_map.insert["R"] = r++;
			    }
			}
			else if (str[placeholder] == 'S' || str[placeholder] == 's')
			{
			    if (s == 0)
			    {
			        s++;
			        letter_map["S"] = s;
			    }
			    else
			    {
			        letter_map.insert["S"] = s++;
			    }
			}
			else if (str[placeholder] == 'T' || str[placeholder] == 't')
			{
			    if (t == 0)
			    {
			        t++;
			        letter_map["T"] = t;
			    }
			    else
			    {
			        letter_map.insert["T"] = t++;
			    }
			}
			else if (str[placeholder] == 'V' || str[placeholder] == 'v')
			{
			    if (v == 0)
			    {
			        v++;
			        letter_map["V"] = v;
			    }
			    else
			    {
			        letter_map.insert["V"] = v++;
			    }
			}
			else if (str[placeholder] == 'W' || str[placeholder] == 'w')
			{
			    if (w == 0)
			    {
			        w++;
			        letter_map["W"] = w;
			    }
			    else
			    {
			        letter_map.insert["W"] = w++;
			    }
			}
			else if (str[placeholder] == 'X' || str[placeholder] == 'x')
			{
			    if (x == 0)
			    {
			        x++;
			        letter_map["X"] = x;
			    }
			    else
			    {
			        letter_map.insert["X"] = x++;
			    }
			}
			else if (str[placeholder] == 'Y' || str[placeholder] == 'y')
			{
			    if (y == 0)
			    {
			        y++;
			        letter_map["Y"] = y;
			    }
			    else
			    {
			        letter_map.insert["Y"] = y++;
			    }
			}
			else if (str[placeholder] == 'Z' || str[placeholder] == 'z')
			{
			    if (z == 0)
			    {
			        z++;
			        letter_map["Z"] = z;
			    }
			    else
			    {
			        letter_map.insert["Z"] = z++;
			    }
			}
		}
	}
	
	
	for(map <char, int>::const_iterator it = letter_map.begin();it != letter_map.end(); it++)
	{
		cout << it->first << " " << it->second << "\n";
	}
	
	cout << "Amount of characters in string: " << string_length << endl;
	cout << "Vowels: " << vowel_count << endl;
	cout << "Consonants: " << consonant_count << endl;
	
}











