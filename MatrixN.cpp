/*Example: A 2x2 diagram contains 5 squares in a 2x2 configuration (four 1x1 + one 2x2):
This program implements a function that takes a parameter of N, where N is the size of the NxN matrix of any size greater than 0 and returns the total number of squares in the matrix.*/
#include <iostream>
using namespace std;

int numSquares(int N)
{
	//Gets total squares and returns it
	int total = N * (N + 1) * (2 * N + 1) / 6 ;
	return total;
}

int main()
{
	//Initialize integer
	int N;
	// Gets matrix dimensions 
	cout << "This program will overlap squares in its count." << endl << "Below, enter how many squares you would like the program to count in a matrix provided by you." << endl << "Enter N for an NxN matrix: ";
	cin >> N;
	if (N == 0) {
		//Fail save
		cout << "A 0x0 matrix has 0 squares.";
	}
	else {
		//Gets total Squares
		int total = numSquares(N);
		//Prints total squares
		cout << "The total amount of squares in your matrix is " << total << ".";
	}
	return 0;
}