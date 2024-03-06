#include <iostream>

using namespace std;

int main() {

  const char *p{"Hello world!"};
  cout << *p << "\n";
  cout << p << "\n";

  char word[]{"Abracadabra!!!"};
  p = word;

  for (int i = 0; i < (int)size(word); i++) {
    cout << *(p + i) << " ";
  }
  cout << "\n";

  return 0;
}