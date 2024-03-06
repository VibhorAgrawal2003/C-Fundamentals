#include <iostream>

using namespace std;

int main() {

  int x{10}, y{20}, z{30};
  int *p = &x;
  int *q = &y;
  int *r = &z;

  // See the addresses
  cout << p << " " << q << " " << r << "\n";

  // Dereferencing pointers to get values
  cout << *p << " " << *q << " " << *r << "\n";

  return 0;
}