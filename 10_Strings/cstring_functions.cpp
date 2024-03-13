#include <iostream>
#include <cstring>

using namespace std;

int main() {

  /**
   * strlen(string) ----> Returns length of string
   * strcmp(str1, str2) ----> Compares two strings
  */

  const char* str1 {"Hello World"};
  const char* str2 {"Hello Robots"};

  cout << "String 1: " << str1 << "\n";
  cout << "Length: " << strlen(str1) << "\n";
  cout << "\n";

  cout << "String 1: " << str1 << "\n";
  cout << "String 2: " << str2 << "\n";
  cout << "Comparing both: " << strcmp(str1, str2) << "\n";
  cout << "\n";

  cout << "String 1: " << str1 << "\n";
  cout << "String 2: " << str2 << "\n";
  cout << "Comparing prefix of size 5: " << strncmp(str1, str2, 5) << "\n";
  cout << "\n";

  cout << "String 1: " << str1 << "\n";
  cout << "First occurence of 'l': index " << (strchr(str1, 'l') - str1) << "\n";
  cout << "Last occurence of 'o': index " << (strrchr(str1, 'o') - str1) << "\n";
  cout << "\n";

  return 0;
}