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

  bool h{true};
  bool i{false};
  bool j{false};

  // +, - are LTR associative
  // *, / are LTR associative
  // ++, -- are RTL associative
  // &&, || are RTL associative

  int result1 = a + b * c - d / e - f + g;
  cout << "Result: " << result1 << endl;

  int result2 = a / b * c + d - e + f;
  cout << "Result: " << result2 << endl;

  int result3 = (a + b) * c - d / e - f + g;
  cout << "Result: " << result3 << endl;

  int result4 = h || i && j;
  cout << "Result: " << result4 << endl;

  int result5 = (h || i) && j;
  cout << "Result: " << result5 << endl;

  int result6 = h || (i && j);
  cout << "Result: " << result6 << endl;

  return 0;
}