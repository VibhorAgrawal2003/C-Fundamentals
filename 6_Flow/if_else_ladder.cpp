#include <iostream>

using namespace std;

class Tool {
public:
  virtual void use() { cout << "Tool Selected\n"; }
};

class Pen : public Tool {
public:
  void use() { cout << "Pen Tool Selected\n"; }
};

class Ellipse : public Tool {
public:
  void use() { cout << "Ellipse Tool Selected\n"; }
};

class Marker : public Tool {
public:
  void use() { cout << "Marker Tool Selected\n"; }
};

class Rectangle : public Tool {
public:
  void use() { cout << "Rectangle Tool Selected\n"; }
};

class Circle : public Tool {
public:
  void use() { cout << "Circle Tool Selected\n"; }
};

int main() {

  Tool *t;

  cout << "--- Paint ---" << endl;
  cout << "1 Pen" << endl;
  cout << "2 Marker" << endl;
  cout << "3 Rectangle" << endl;
  cout << "4 Circle" << endl;
  cout << "5 Ellipse" << endl;
  cout << "Pick a choice: ";

  int ch{};
  cin >> ch;

  if (ch == 1) {
    t = new Pen();
  } else if (ch == 2) {
    t = new Marker();
  } else if (ch == 3) {
    t = new Rectangle();
  } else if (ch == 4) {
    t = new Circle();
  } else if (ch == 5) {
    t = new Ellipse();
  } else {
    t = new Tool();
  }

  t->use();

  return 0;
}
