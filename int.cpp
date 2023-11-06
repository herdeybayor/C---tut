#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main() {
  int a = 5;
  int b = 2;
  double c = a / (double)b;
  cout << "c = " << c << endl;

  cout << sizeof(long) << endl;
  cout << SHRT_MAX << endl;
  cout << SHRT_MIN << endl;

  return 0;
}
