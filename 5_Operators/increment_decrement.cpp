#include <iostream>

using namespace std;

int main() {

  int x = 5;
  cout << endl;
  cout << "The value is (incrementing): " << x++ << endl;
  cout << "The new value is: " << x << endl;

  int y = 12;
  cout << endl;
  cout << "The value is (decrementing): " << y-- << endl;
  cout << "The new value is: " << y << endl;

  int p = 5;
  cout << endl;
  cout << "The value with pre increment: " << ++p << endl;

  int q = 8;
  cout << endl;
  cout << "The value with pre decrement: " << --q << endl;

  return 0;
}
