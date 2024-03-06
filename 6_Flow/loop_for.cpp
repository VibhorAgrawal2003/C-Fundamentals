#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};

  // Loop with integer index with internal scope
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";

  // Loop with size_t index with internal scope
  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";

  // Loop to access the items of vector directly
  for (auto x : v) {
    cout << x << " ";
  }
  cout << "\n";

  // Loop with integer index with external scope
  int j{0};
  for (; j < v.size(); j++) {
    cout << v[j] << " ";
  }
  cout << "\n";

  return 0;
}