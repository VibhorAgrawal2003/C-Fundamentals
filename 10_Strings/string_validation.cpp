#include <iostream>

using namespace std;

void checkStringCharacters(string pass) {
  for (char x : pass) {
    if (isalpha(x)) {
      if (isupper(x)) {
        cout << x << " : letter (uppercase)\n";
      } else {
        cout << x << " : letter (lowercase)\n";
      }
    }
    else if(isdigit(x)) {
      cout << x << " : number\n";
    }
    else if(isspace(x)) {
      cout << "space encountered\n";
    }
    else {
      cout << x << " : special character\n";
    }
  }
}

int main() {

  string pass = "applesauce123#AMAZING Much Love <3";
  checkStringCharacters(pass);

  return 0;
}