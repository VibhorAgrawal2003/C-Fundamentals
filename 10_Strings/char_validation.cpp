#include <iostream>

using namespace std;

int main() {

  /**
   * Available Functions for Matching Characters
   * - std::isalpha(chr)
   * - std::isdigit(chr)
   * - std::isalnum(chr)
   * - std::isspace(chr)
   * - std::islower(chr)
   * - std::isupper(chr)
  */

 /**
  * Available Functions for Converting Characters
  * - std::toupper(chr)
  * - std::tolower(chr)
 */

  /**
   * Note that all these are present within <iostream>
  */

  char a{'A'};
  char b{'m'};
  char c{' '};
  char d{'9'};
  char e{'&'};
  char f{1};

  cout << boolalpha << "\n";
  cout << "a: " << a << ", isalpha(a): " << isalpha(a) << "\n";
  cout << "b: " << b << ", isalpha(b): " << isalpha(b) << "\n";
  cout << "c: " << c << ", isalpha(c): " << isalpha(c) << "\n";
  cout << "d: " << d << ", isalpha(d): " << isalpha(d) << "\n";
  cout << "e: " << e << ", isalpha(e): " << isalpha(e) << "\n";
  cout << "f: " << f << ", isalpha(f): " << isalpha(f) << "\n";

  cout << "\n";
  cout << "a: " << a << ", isalnum(a): " << isalnum(a) << "\n";
  cout << "b: " << b << ", isalnum(b): " << isalnum(b) << "\n";
  cout << "c: " << c << ", isalnum(c): " << isalnum(c) << "\n";
  cout << "d: " << d << ", isalnum(d): " << isalnum(d) << "\n";
  cout << "e: " << e << ", isalnum(e): " << isalnum(e) << "\n";
  cout << "f: " << f << ", isalnum(f): " << isalnum(f) << "\n";

  cout << "\n";
  cout << "a: " << a << ", isblank(a): " << isblank(a) << "\n";
  cout << "b: " << b << ", isblank(b): " << isblank(b) << "\n";
  cout << "c: " << c << ", isblank(c): " << isblank(c) << "\n";
  cout << "d: " << d << ", isblank(d): " << isblank(d) << "\n";
  cout << "e: " << e << ", isblank(e): " << isblank(e) << "\n";
  cout << "f: " << f << ", isblank(f): " << isblank(f) << "\n";

  return 0;
}