// DS_Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "matrixHelper.h"
using namespace std;


/// <summary>
/// Mains this instance.
/// </summary>
/// <returns></returns>
int main()
{
	int holdTheScreen;

	//create a 5 by 6 two-dimensional vector containing all ones
	const int ROW = 10;
	const int COL = 10;

	vector< vector<int> > multiVector(ROW, vector<int>(COL, 1));

	//increase the digit size of one entry
	multiVector[1][4] = 1000;

	//output the table
	display(cout, multiVector);
	
	cin >> holdTheScreen;
    return 0;
}

