#include <iostream>

using namespace std;

int main() {

  // constant pointers

  double var {20};
  double *const p = &var;
  cout << var << " " << *p << "\n";

  // dynamically allocated constant pointer

  double *const q = new double{12};
  cout << *q << "\n";

  // constant pointers to constant data

  const double var2 {33};
  const double *const t = &var2;

  // *t = 32;  ----> expression must be a modifiable lvalue
  // t = &var; ----> expression must be a modifiable lvalue

  // "const double" means that pointer looks at const double data
  // "*const t" means that the pointer itself is const

  return 0;
}