#include <iostream>

using namespace std;

int main() {

  int *p{nullptr}, q{10};
  cout << "p: " << sizeof(p) << " bytes \n";
  cout << "q: " << sizeof(q) << " bytes \n";

  int *x{nullptr}, *y{nullptr}, *z{nullptr};
  cout << "x: " << sizeof(x) << " bytes \n";
  cout << "y: " << sizeof(y) << " bytes \n";
  cout << "z: " << sizeof(z) << " bytes \n";

  return 0;
}