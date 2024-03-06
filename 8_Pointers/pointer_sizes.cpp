#include <iostream>

using namespace std;

int main() {

  int a{12};
  float b{12.012f};
  double c{12.012};
  char d{'A'};
  string e{"Hello World!"};

  int *p = &a;
  float *q = &b;
  double *r = &c;
  char *s = &d;
  string *t = &e;

  cout << "Int pointer has size: " << sizeof(p) << " and value: " << *p << "\n";
  cout << "Float pointer has size: " << sizeof(q) << " and value: " << *q
       << "\n";
  cout << "Double pointer has size: " << sizeof(r) << " and value: " << *r
       << "\n";
  cout << "Char pointer has size: " << sizeof(s) << " and value: " << *s
       << "\n";
  cout << "String pointer has size: " << sizeof(t) << " and value: " << *t
       << "\n";

  return 0;
}