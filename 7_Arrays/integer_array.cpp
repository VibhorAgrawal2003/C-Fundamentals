#include <iostream>

using namespace std;

int *buildIntegerArray(int n) {

  if (n <= 0) {
    cout << "Cannot create an array of size " << n << "\n";
    return nullptr;
  }

  int *p = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter element at index " << i << ": ";
    cin >> *(p + i);
  }
  return p;
}

void showIntegerArray(int *p, int n) {
  for (int i = 0; i < n; i++) {
    cout << *(p + i) << " ";
  }
  cout << "\n";
}

int main() {
  int n{};
  cout << "Enter array length: ";
  cin >> n;
  int *p = buildIntegerArray(n);
  showIntegerArray(p, n);
  delete p;

  return 0;
}