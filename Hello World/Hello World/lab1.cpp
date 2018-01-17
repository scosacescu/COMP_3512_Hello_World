#include "lab1.h"


// Greatest Common Denominator using the Euclidean algorithm
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	//don't alter input values, but determine which value is smaller and should 
	//thus be divided into larger using euclidean algo
	int smallest = (a < b) ? a : b;
	int largest = (a > b) ? a : b;

	//if either of the values are 0, then the GCD is the other value by default. don't perform any further calculations
	if (smallest == 0) {
		return largest;
	}
	else if (largest == 0) {
		return smallest;
	}
	else if (largest%smallest == 0) { //if the numbers multiply into each other without a remainder, return the smaller number
		return smallest;
	}
	else {
		//if not, recursively call gcd using the smaller number and the remainder of larger mod smaller 
		//until you reach base case ie a remainder of zero
		return gcd(smallest, largest%smallest);
	}

}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	int fib = n;

	if (fib == 0) {
		//base case 1: 0th fib sequence is 0
		return fib;
	}
	else if (fib == 1) {
		//base case 2: 1st fib sequence is 1
		return fib;
	}
	else {
		//fun with recursion!
		return ((fibonacci(fib-1)) + (fibonacci(fib-2)));
	}
}
