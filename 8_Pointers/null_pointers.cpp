#include <iostream>

using namespace std;

int main() {

  int *p;
  int *q{nullptr};

  /*
   cout << "Pointer p has address : " << p << " and points to value : " << *p
        << "\n";
   cout << "Pointer q has address : " << q << " and points to value : " << *q
        << "\n";
  */

  // The above cout statements would lead to segmentation faults
  // as we try to access result from a pointer that wasn't initialized

  return 0;
}