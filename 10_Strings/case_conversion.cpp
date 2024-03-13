#include <iostream>
#include <iomanip>

using namespace std;

string makeLower(string pass) {
  string newpass{};
  for (char x : pass) {
    newpass += tolower(x);
  }
  return newpass;
}

string makeUpper(string pass) {
  string newpass{};
  for (char x : pass) {
    newpass += toupper(x);
  }
  return newpass;
}

string swapCase(string pass) {
  string newpass{};
  for (char x : pass) {
    if (isupper(x)) {
      newpass += tolower(x);
    }
    else {
      newpass += toupper(x);
    }
  }
  return newpass;
}

int main() {

  string pass1 = "kANgarOO!!!";
  string pass2 = makeLower(pass1);
  string pass3 = makeUpper(pass1);
  string pass4 = swapCase(pass1);

  cout << setw(15) << left << "Orginal: " << pass1 << "\n";
  cout << setw(15) << left << "Lowercase: " << pass2 << "\n";
  cout << setw(15) << left << "Uppercase: " << pass3 << "\n";
  cout << setw(15) << left << "Swapped: " << pass4 << "\n";

  return 0;
}