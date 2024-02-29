#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void get_data(vector<int> &roll, vector<string> &name, int size) {
  for (int i = 0; i < size; i++) {
    string x{};
    cout << "Enter name " << i + 1 << ": ";
    cin >> x;
    roll.push_back(i + 1);
    name.push_back(x);
  }
}

void show_data(vector<int> &roll, vector<string> &name, int size) {
  int rw{5};
  int nw{10};

  for (int i = 0; i < size; i++) {
    cout << setw(rw) << left << setfill('0') << roll[i] << " ";
    cout << setw(nw) << right << setfill('-') << name[i] << " ";
    cout << endl;
  }
}

int main() {
  vector<int> roll{};
  vector<string> name{};

  int n{};
  cout << "Enter no. of records: ";
  cin >> n;

  get_data(roll, name, n);
  show_data(roll, name, n);

  return 0;
}