#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
void show_information(T &var) {
  cout << "Value: " << var << ", Type: " << typeid(var).name() << " and Size: " << sizeof(var) << " byte(s)\n";
}

int main() {

  int a{12};
  float b{1.02f};
  double c{2.229};
  char d{'G'};
  bool e{true};

  int &r1{a};
  float &r2{b};
  double &r3{c};
  char &r4{d};
  bool &r5{e};

  cout << "~~~ Metadata ~~~\n";
  cout << "a -> "; show_information(a);
  cout << "b -> "; show_information(b);
  cout << "c -> "; show_information(c);
  cout << "d -> "; show_information(d);
  cout << "e -> "; show_information(e);

  cout << "\n";
  cout << "r1 -> "; show_information(r1);
  cout << "r2 -> "; show_information(r2);
  cout << "r3 -> "; show_information(r3);
  cout << "r4 -> "; show_information(r4);
  cout << "r5 -> "; show_information(r5);

  cout << "\n~~~ Addresses ~~~\n";
  cout << "a -> " << &a << "\n";
  cout << "b -> " << &b << "\n";
  cout << "c -> " << &c << "\n";
  cout << "d -> " << static_cast<const void*>(&d) << "\n";
  cout << "e -> " << &e << "\n";

  cout << "\n";
  cout << "r1 -> " << &r1 << "\n";
  cout << "r2 -> " << &r2 << "\n";
  cout << "r3 -> " << &r3 << "\n";
  cout << "r4 -> " << static_cast<const void*>(&r4) << "\n";
  cout << "r5 -> " << &r5 << "\n";

  return 0;
}