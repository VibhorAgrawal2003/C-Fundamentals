#include <iomanip>
#include <iostream>

using namespace std;

void show_bases(int n) {
  cout << showbase << uppercase;
  cout << setw(15) << left << "Decimal: " << dec << setw(10) << n << endl;
  cout << setw(15) << left << "Octal: " << oct << setw(10) << n << endl;
  cout << setw(15) << left << "Hexadecimal: " << hex << setw(10) << n << endl;
  cout << endl;
}

int main() {

  while (true) {
    int n{};
    char ch{};

    cout << "\n--- Base Converter ---\n" << endl;
    cout << "Enter a number: ";
    cin >> n;

    show_bases(n);
    cout << "Escape? (y | n) ";
    cin >> ch;

    if (ch == 'y' || ch == 'Y') {
      break;
    }
  }

  return 0;
}