#include <iostream>

using namespace std;

int main() {

  int *p = new int[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 12; i++) {
    cout << *(p + i) << " ";
  }

  return 0;
}