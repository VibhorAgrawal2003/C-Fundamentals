#include <iostream>

using namespace std;

int main() {

  int a{6};
  int b{3};
  int c{8};
  int d{9};
  int e{3};
  int f{2};
  int g{5};

  // +, - are LTR associative
  // *, / are LTR associative
  // ++, -- are RTL associative

  int result1 = a + b * c - d / e - f + g;
  cout << "Result: " << result1 << endl;

  int result2 = a / b * c + d - e + f;
  cout << "Result: " << result2 << endl;

  int result3 = (a + b) * c - d / e - f + g;
  cout << "Result: " << result3 << endl;

  return 0;
}