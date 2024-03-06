#include <iostream>
#include <typeinfo>

using namespace std;

void showArray(int *p, int size) {
  for (int i = 0; i < size; i++) {
    cout << *(p + i) << " ";
  }
  cout << "\n";
}

int main() {

  const int n = 10;
  int arr1[n];

  int arr2[n]{10, 20, 30, 40};

  int arr3[n]{};

  int arr4[n] = {10, 20, 30, 40};

  int arr5[] = {10, 20, 30, 40};

  showArray(arr1, n);
  showArray(arr2, n);
  showArray(arr3, n);
  showArray(arr4, n);
  showArray(arr5, n);

  return 0;
}