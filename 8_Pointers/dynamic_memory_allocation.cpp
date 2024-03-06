#include <iostream>

using namespace std;

int main() {

  int *p{new int};
  int *q{new int(20)};
  int *r{new int{22}};

  cout << "*p = " << *p << "\n";
  cout << "*q = " << *q << "\n";
  cout << "*r = " << *r << "\n";

  *p = 3;
  *q = 4;
  *r = 5;

  cout << "\nUpdating their values\n";
  cout << "*p = " << *p << "\n";
  cout << "*q = " << *q << "\n";
  cout << "*r = " << *r << "\n";

  delete p;
  delete q;
  delete r;

  return 0;
}