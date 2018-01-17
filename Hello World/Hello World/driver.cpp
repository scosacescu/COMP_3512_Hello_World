// Hello World.cpp : Defines the entry point for the console application.
//

#include "lab1.h"
#include <iostream>

using namespace std;

// COMP 3512 Lab 01: Stephanie Cosacescu A00977073
int main()
{
	cout << "Enter two positive integers:" << endl;
	int first, second;
	cin >> first >> second;

	cout << "The " << first << " Fibonacci number is " << fibonacci(first) << endl;
	cout << "The " << second << " Fibonacci number is " << fibonacci(second) << endl;
	cout << "The greatest common denominator of " << first << " and " << second << " is " << gcd(first, second) << endl;
	system("pause");
    return 0;
}

