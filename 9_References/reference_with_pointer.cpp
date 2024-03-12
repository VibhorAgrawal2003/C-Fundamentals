#include <iostream>

using namespace std;

int main() {

  double variable{12.89};
  double &reference {variable};
  double *pointer {&variable};

  cout << "\ndefault values\n";
  cout << "variable: " << variable << "\n";
  cout << "reference: " << reference << "\n";
  cout << "*pointer: " << *pointer << "\n";

  variable = 13.39;

  cout << "\nupdated variable\n";
  cout << "variable: " << variable << "\n";
  cout << "reference: " << reference << "\n";
  cout << "*pointer: " << *pointer << "\n";

  reference = 19.78;

  cout << "\nupdated reference\n";
  cout << "variable: " << variable << "\n";
  cout << "reference: " << reference << "\n";
  cout << "*pointer: " << *pointer << "\n";

  *pointer = 20.17;
  cout << "\nupdated via pointer\n";
  cout << "variable: " << variable << "\n";
  cout << "reference: " << reference << "\n";
  cout << "*pointer: " << *pointer << "\n";

  return 0;
}