#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};

  size_t i = 0;
  do {
    cout << v[i] << " ";
    i++;
  } while (i < v.size());
  cout << "\n";

  size_t j = 0;
  do {
    cout << v[j] << " ";
    i++;
  } while (j < 0);

  return 0;
}