/*
 *Rodrigo Luzuriaga
 *Project #3 - Question #1
 *CSCI 110 - T/TH
 */

#include <iostream>
#include <fstream>

using namespace std;

main()
{
    //Variable declaration
    ofstream myfile; //Only used to get the output onto a file for printing.
    int input, i;
    int a = 1, b = 1, fib_calc;
    
    
    myfile.open("Answers/Output_Q1.txt");
    
    
    cout << "Please enter how many Fibonacci numbers you want to output (1 or larger): ";
    cin >> input;
    
    myfile << "Please enter how many Fibonacci numbers you want to output (1 or larger): " << input << endl;
    
    while (input <= 0)
    {
        cout << "Please enter a valid number (1 or larger): ";
        cin >> input;
        
        myfile << "Please enter a valid number (1 or larger): " << input << endl;
    }
    
    
    if (input == 1)
    {
        cout << a << endl;
    	myfile << a << endl;
    }
    else if (input == 2)
    {
        cout << a << ", " << b << endl;
        myfile << a << ", " << b << endl;
    }
    else
    {
        cout << a << ", " << b;
        myfile << a << ", " << b;
    }
    
    
    for (i = 0; i < input - 2; i++)
    {
        fib_calc = a + b;
        cout << ", " << fib_calc;
        myfile << ", " << fib_calc;
        b = a;
        a = fib_calc;
    }
    
    cout << endl;
    myfile << endl;
    
    
    myfile.close();
}



