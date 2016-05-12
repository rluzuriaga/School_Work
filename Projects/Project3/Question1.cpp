/*
    Rodrigo Luzuriaga
    Project #3 - Question #1
    CSCI 110 - T/TH
*/

#include <iostream>

using namespace std;

main()
{
    //Variable declaration
    int input, i;
    int a = 1, b = 1, fib_calc;
    
    cout << "Please enter how many Fibonacci numbers you want to output (1 or larger): ";
    cin >> input;
    
    while (input <= 0)
    {
        cout << "Please enter a valid number (1 or larger): ";
        cin >> input;
    }
    
    
    if (input == 1)
    {
        cout << a << endl;
    }
    else if (input == 2)
    {
        cout << a << ", " << b << endl;
    }
    else
    {
        cout << a << ", " << b;
    }
    
    
    for (i = 0; i < input - 2; i++)
    {
        fib_calc = a + b;
        cout << ", " << fib_calc;
        b = a;
        a = fib_calc;
    }
    
    cout << " " << endl;
}