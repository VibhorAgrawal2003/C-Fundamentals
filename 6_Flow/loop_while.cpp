#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};

  size_t i{0};
  while (i < v.size()) {
    cout << v[i] << " ";
    i++;
  }

  return 0;
}