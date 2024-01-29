#include<iostream>

using namespace std;

template <typename T>
T add_values(T x, T y){
    return x + y;
}

template <typename T>
T sub_values(T x, T y){
    return x - y;
}

template <typename T>
T mul_values(T x, T y){
    return x * y;
}

template <typename T>
T div_values(T x, T y){
    return x / y;
}

int main(){

    int a {9};
    int b {3};

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "\n";

    cout << "Sum: " << add_values(a, b) << endl;
    cout << "Difference: " << sub_values(a, b) << endl;
    cout << "Product: " << mul_values(a, b) << endl;
    cout << "Quotient: " << div_values(a, b) << endl;

    return 0;
}