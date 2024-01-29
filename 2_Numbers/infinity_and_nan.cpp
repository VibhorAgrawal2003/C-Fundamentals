#include<iostream>

using namespace std;

int main(){

    double number_1 {5.6};
    double number_2 {-5.6};
    double number_3 {};
    double number_4 {};

    // Nonzero fraction divided by zero fraction gives inf
    cout << number_1 / number_3 << endl;
    cout << number_2 / number_4 << endl;

    // Zero fraction divided by zero fraction gives NaN
    cout << number_3 / number_4 << endl;

    return 0;
}