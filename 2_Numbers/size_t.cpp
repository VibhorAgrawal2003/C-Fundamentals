#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

/**
 * The stdlib.h and stddef.h header files define a datatype called size_t
 * which is used to represent the size of an object. Library functions that
 * take sizes expect them to be of type size_t, and the sizeof operator
 * evaluates to size_t.
 *
 * The actual type of the size_t is platform dependent. Keep in mind that
 * it is different from an unsigned int type.
 */

int main() {

  typedef long long int ll;
  typedef unsigned long long int ull;

  vector<int> v{1, 2, 3, 4, 5};
  int a[]{1, 2, 3, 4, 5};

  cout << "\n\n--- size_t datatype ---\n\n";
  cout << "sizeof(size_t): " << sizeof(size_t) << " bytes\n";
  cout << "typeid(v.size()).name(): " << typeid(v.size()).name() << "\n";
  cout << "typeid(size(v)).name(): " << typeid(size(v)).name() << "\n";
  cout << "typeid(size(a)).name(): " << typeid(size(a)).name() << "\n";

  cout << "\n\n--- unsigned int datatype ---\n\n";
  cout << "sizeof(unsigned int): " << sizeof(unsigned int) << " bytes\n";
  cout << "typeid(unsigned int).name(): " << typeid(unsigned int).name()
       << "\n";

  cout << "\n\n--- unsigned long long datatype ---\n\n";
  cout << "sizeof(ull): " << sizeof(ull) << " bytes\n";
  cout << "typeid(ull).name(): " << typeid(ull).name() << "\n";

  return 0;
}