#include "matrixHelper.h"
#include "stdafx.h"

using namespace std;

/// <summary>
/// Represents the width.
/// </summary>
/// <param name="n">The number in the vector container.</param>
/// <returns>width</returns>
int repWidth(int n)
{
	int neg = 0, digits;

	if (n < 0)
	{
		neg = 1; // this will account for the - in the negative number
		n *= -1; // this will give us the absolute value of the number
	}
	digits = (n > 0 ? (int)log10((double)n) + 1 : 1);

	return digits + neg;

}

/// <summary>
/// find the Max width in the mutli vector.
/// </summary>
/// <param name="M">The multivector</param>
/// <returns>max width within the vector</returns>
int maxWidth(vector<vector<int> > M)
{
	int max = 0, nextWid;

	vector<vector<int> >::const_iterator row;
	vector<int>::const_iterator col;

	for (row = M.begin(); row != M.end(); ++row)
	{
		for (col = row->begin(); col != row->end(); ++col)
		{
			nextWid = repWidth(*col);
			if (nextWid > max)
			{
				max = nextWid;
			}
		}
	}
	return max;
}

void display(ostream & out, const vector<vector<int> > & M)
{
	int wid = maxWidth(M) + 2;
	vector<vector<int> >::const_iterator row;
	vector<int>::const_iterator col;

	for (row = M.begin(); row != M.end(); ++row)
	{
		for (col = row->begin(); col != row->end(); ++col)
		{
			out << setw(wid) << *col;
		}
		out << endl;
	}
}
