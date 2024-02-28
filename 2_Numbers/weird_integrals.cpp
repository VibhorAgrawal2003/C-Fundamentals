#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  char x = 'A';
  char y = 'B';
  short p = 12;
  short q = 16;
  int width = 20;

  cout << endl;
  cout << "Before performing operations: " << endl;
  cout << setw(width) << left << "size of x" << sizeof(x) << endl;
  cout << setw(width) << left << "size of y" << sizeof(y) << endl;
  cout << setw(width) << left << "size of p" << sizeof(p) << endl;
  cout << setw(width) << left << "size of q" << sizeof(q) << endl;

  auto a = x + y;
  auto b = x - y;
  auto c = p + q;
  auto d = p - q;

  cout << endl;
  cout << "After performing operations: " << endl;
  cout << setw(width) << left << "size of x+y" << sizeof(a) << endl;
  cout << setw(width) << left << "size of x-y" << sizeof(b) << endl;
  cout << setw(width) << left << "size of p+q" << sizeof(c) << endl;
  cout << setw(width) << left << "size of p-q" << sizeof(d) << endl;

  return 0;
}