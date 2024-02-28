#include <iostream>

using namespace std;

int main() {

  bool a{};
  bool b{};
  bool c{};

  cout << "Enter 1|0 for true|false" << endl;
  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;
  cout << "c: ";
  cin >> c;

  cout << boolalpha << endl;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;

  cout << endl;
  cout << "!a: " << (!a) << endl;
  cout << "!b: " << (!b) << endl;
  cout << "!c: " << (!c) << endl;

  cout << endl;
  cout << "a && b: " << (a && b) << endl;
  cout << "a || b: " << (a || b) << endl;

  return 0;
}