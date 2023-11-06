#include <iostream>
#include <float.h>

using std::cout;

int main()
{
	float a;
	double b = 7.4E-4;
	long double c = 9.4E+13;

	cout << "b = " << b << std::endl;
	cout << std::fixed << "c = " << c << std::endl;
	cout << "FLT_DIG = " << FLT_DIG << std::endl;
	cout << "DBL_DIG = " << DBL_DIG << std::endl;
	cout << "LDBL_DIG = " << LDBL_DIG << std::endl;

	return 0;
}
