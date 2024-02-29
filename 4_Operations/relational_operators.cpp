#include <iostream>

using namespace std;

int main() {

  int n1{};
  int n2{};

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  cout << "n1: " << n1 << endl;
  cout << "n2: " << n2 << endl;

  cout << boolalpha;
  cout << "n1 < n2: " << (n1 < n2) << endl;
  cout << "n1 > n2: " << (n1 > n2) << endl;
  cout << "n1 <= n2: " << (n1 <= n2) << endl;
  cout << "n1 >= n2: " << (n1 >= n2) << endl;
  cout << "n1 == n2: " << (n1 == n2) << endl;
  cout << "n1 != n2: " << (n1 != n2) << endl;

  return 0;
}