#include <iostream>

using namespace std;

string reverseString(string str) {
  string res {};
  for (char x : str){
    res = x + res;
  }
  return res;
}

int main() {

  string strA {"Hello"};
  string strB {"Bye"};

  cout << "~ ~ ~ Original ~ ~ ~\n";
  cout << "strA: " << strA << "\n";
  cout << "strB: " << strB << "\n";
  cout << "\n";

  cout << "~ ~ ~ Reversed ~ ~ ~\n";
  cout << "strA: " << reverseString(strA) << "\n";
  cout << "strB: " << reverseString(strB) << "\n";
  cout << "\n";

  return 0;
}