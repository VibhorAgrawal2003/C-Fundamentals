#include <iostream>

using namespace std;

int main() {

  int variable{15};
  const int reference{variable};

  cout << "\n";
  cout << "variable = " << variable << "\n";
  cout << "reference = " << reference << "\n";
  cout << "&variable = " << &variable << "\n";
  cout << "&reference = " << &reference << "\n";

  // reference = 12;
  // Above gives an error "expression must be a modifiable lvalue"

  variable = 12;

  cout << "\n";
  cout << "variable = " << variable << "\n";
  cout << "reference = " << reference << "\n";
  cout << "&variable = " << &variable << "\n";
  cout << "&reference = " << &reference << "\n";

  // const reference doesn't share the same address any more
  // instead, it is present at an address close to original address
  // in this case, we find they are in contiguous locations in memory

  return 0;
}