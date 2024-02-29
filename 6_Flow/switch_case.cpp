#include <iostream>

using namespace std;

class Drink {
public:
  virtual void drink() { cout << "You drank nothing." << endl; }
};

class Coffee : public Drink {
public:
  void drink() { cout << "You drank coffee." << endl; }
};

class Tea : public Drink {
public:
  void drink() { cout << "You drank tea." << endl; }
};

class Boba : public Drink {
public:
  void drink() { cout << "You drank boba." << endl; }
};

int main() {

  Drink *d;

  cout << "--- Cafe ---" << endl;
  cout << "1 Coffee" << endl;
  cout << "2 Tea" << endl;
  cout << "3 Boba" << endl;
  cout << "Enter your choice: ";

  int ch{};
  cin >> ch;

  switch (ch) {
  case (1): {
    d = new Coffee();
    break;
  }
  case (2): {
    d = new Tea();
    break;
  }
  case (3): {
    d = new Boba();
    break;
  }
  default: {
    d = new Drink();
  }
  }

  d->drink();

  return 0;
}