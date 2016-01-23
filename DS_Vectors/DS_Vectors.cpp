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
	int holdVal;
	const int ROW = 4;
	const int COL = 6;

	vector< vector<double> > multiVector(ROW, vector<double>(COL, 32.2));

	cout << repWidth(1000000000);
	
	cin >> holdVal;
    return 0;
}

