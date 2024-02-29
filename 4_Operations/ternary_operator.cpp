#include <iostream>

using namespace std;

template <typename T> T compareFour(T &w, T &x, T &y, T &z) {
  return (w > x) ? ((w > y) ? ((w > z) ? w : z) : ((y > z) ? y : z))
                 : ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z));
}

int main() {

  int a, b, c, d;
  cout << "Enter four integers: ";
  cin >> a >> b >> c >> d;

  cout << "Largest number: " << compareFour<int>(a, b, c, d) << endl;

  return 0;
}