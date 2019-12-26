#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

double f(int number) // common sequence member
{
	return (double)(4 * number * number) / ((4 * number * number) - 1);
}

int main()
{
	const double exact_value = M_PI_2; // pi/2
	const double calculation_error = 0.001;
	
	int count = 0;
	double product = 1.0;
	while(abs(exact_value - product) >= calculation_error)
	{
		count++;
		product *= f(count);
	}
	
	cout << count << " members";
	return 0;
}
