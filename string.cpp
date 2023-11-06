#include <iostream>
#include <string>
#include <climits>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string greeting = "Hello";
	greeting += " there";
	greeting.append("!");
	cout << greeting << endl;
	cout << greeting.length() << endl;
	cout << greeting[0] << endl;
	cout << greeting.find("there") << endl;
	cout << greeting.substr(6, 5) << endl;
	cout << greeting.erase(7, 1) << endl;
	cout << greeting.replace(7, 2, "e") << endl;
	cout << greeting.insert(3, "     ") << endl;
	cout << greeting.insert(3, 3, '!') << endl;
	cout << greeting.replace(3, 3, "e") << endl;
	cout << greeting.find("sherifdeen") << endl;
	cout << "Unsigned Long Max = " << ULONG_MAX << endl;

	unsigned long x = -1;

	// npos == -1
	cout << "npos = " << string::npos << endl;
	cout << "x = " << x << endl;

	if (greeting.find("sherifdeen") == string::npos)
		cout << "Not found" << endl;
	else
		cout << "Found" << endl;

	return 0;
}
