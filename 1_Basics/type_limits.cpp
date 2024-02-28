#include <iostream>
#include <limits>

using namespace std;
typedef long long ll;

int main() {

  cout << "short: from " << numeric_limits<short>::min() << " to "
       << numeric_limits<short>::max() << endl;

  cout << "int: from " << numeric_limits<int>::min() << " to "
       << numeric_limits<int>::max() << endl;

  cout << "long: from " << numeric_limits<long>::min() << " to "
       << numeric_limits<long>::max() << endl;

  cout << "long long: from " << numeric_limits<ll>::min() << " to "
       << numeric_limits<ll>::max() << endl;

  return 0;
}