#include <iostream>

using namespace std;

int main() {

  const char msg1[]{'H', 'e', 'l', 'l', 'o', ' ', 'w',
                    'o', 'r', 'l', 'd', '!', '\0'};

  const char msg2[] = "Good bye!";

  const char msg3[] = "Abracadabra!!!";

  cout << msg1 << "\n";
  cout << msg2 << "\n";

  for (char x : msg3) {
    cout << x << " ";
  }
  cout << "\n";

  return 0;
}