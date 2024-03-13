#include <iostream>
// #include <cctype>

using namespace std;

int main() {

  char a{'A'};
  cout << isalnum(a) << " "; // alphanumeric
  cout << isalpha(a) << " "; // alphabetic
  cout << islower(a) << " "; // lowercase
  cout << isupper(a) << " "; // uppercase
  cout << isdigit(a) << " "; // digits
  cout << isxdigit(a) << " "; // hexadecimal digits
  cout << iscntrl(a) << " "; // control characters
  cout << isgraph(a) << " "; // graphical characters
  cout << isspace(a) << " "; // spaces
  cout << isblank(a) << " "; // blanks
  cout << isprint(a) << " "; // printing characters
  cout << ispunct(a) << " "; // punctuation

  cout << static_cast<char>(tolower(a)) << " "; // convert to lowercase
  cout << static_cast<char>(toupper(a)) << " "; // convert to uppercase

  return 0;
}