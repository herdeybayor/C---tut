#include <iostream>
using std::cout;
#define PRINT(EXP) cout << #EXP " = " << EXP << "\n"

int main()
{
	const int X = 5;
	//X = 7; // error: assignment of read-only variable 'x'
	
	PRINT(X);

	enum { a, b, c };

	PRINT(a);
	PRINT(b);
	PRINT(c);

	return 0;
}
