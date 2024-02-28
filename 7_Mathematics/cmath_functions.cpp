#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  double cost{-7.7};
  int width{30};

  cout << endl;
  cout << setw(width) << left << "Value" << cost << endl;
  cout << setw(width) << left << "Floor Value" << floor(cost) << endl;
  cout << setw(width) << left << "Ceiling Value" << ceil(cost) << endl;
  cout << setw(width) << left << "Rounded Value" << round(cost) << endl;
  cout << setw(width) << left << "Absolute Value" << abs(cost) << endl;
  cout << setw(width) << left << "Square Root of Value " << sqrt(cost) << endl;
  cout << setw(width) << left << "Square Root of Absolute " << sqrt(abs(cost))
       << endl;

  cout << endl;
  cout << setw(width) << left << "Natural base" << exp(1) << endl;
  cout << setw(width) << left << "e raised to 2" << exp(2) << endl;
  cout << setw(width) << left << "e raised to 3" << exp(3) << endl;

  cout << endl;
  cout << setw(width) << left << "ln(1)" << log(1) << endl;
  cout << setw(width) << left << "ln(2)" << log(2) << endl;
  cout << setw(width) << left << "ln(3)" << log(3) << endl;
  cout << setw(width) << left << "ln(5)" << log(5) << endl;
  cout << setw(width) << left << "ln(7)" << log(7) << endl;

  cout << endl;
  cout << setw(width) << left << "log10(1)" << log10(1) << endl;
  cout << setw(width) << left << "log10(2)" << log10(2) << endl;
  cout << setw(width) << left << "log10(3)" << log10(3) << endl;
  cout << setw(width) << left << "log10(5)" << log10(5) << endl;
  cout << setw(width) << left << "log10(7)" << log10(7) << endl;

  return 0;
}