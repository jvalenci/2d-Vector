#include "matrixHelper.h"
#include "stdafx.h"

using namespace std;

/// <summary>
/// Operators the specified out.
/// </summary>
/// <param name="out">The out.</param>
/// <param name="v">The v.</param>
/// <returns></returns>
ostream & operator<<(ostream &out, vector<double> &v)
{
	for (vector<double>::iterator it = v.begin(); it != v.end(); ++it)
	{
		out << *it << " ";
	}
	return out;
}

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
