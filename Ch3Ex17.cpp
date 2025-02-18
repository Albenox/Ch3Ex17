/*
    Program File Name: Ch3Ex17.cpp
    Programmer: Gabriel Inocentes
    Date: February 16, 2024
    Requirements:
    Create a program that generates 2 random numbers to be added, allowing the user to work the problem out and press a key to reveal the answer. On the branch, the program should recieve an answer and determine if it is incorrect or correct.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    //Generates a value based on the current time
    double baseSeed = time(0);

    //Takes that value and increases it by the power of 2
    double seed = pow(baseSeed,2);

    //Declares that value as the seed for the randomly generated number, so the numbers vary further from one another
    srand(seed);
    
    double numb1 = rand() % 999;
    double numb2 = rand() % 999;
    
    cout << right << setw(3) << numb1 << endl;
    cout << right << setw(3) << numb2 << endl;
    
    double sum = numb1 + numb2;
    double userSum;

    cout << "Enter the sum of the 2 numbers above;" << endl;
    cin >> userSum;
    
    if (sum == userSum)
        cout << "Correct, you win nothing!";
    else
        cout << "The answer provided is incorrect, the sum of the numbers above was " << sum;
}

