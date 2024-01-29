#include<iostream>
#include<iomanip>
#include<typeinfo>

using namespace std;

template <typename T>
void get_info(T& var){
    cout << "data: " << var;
    cout << ", size: " << sizeof(var);
    cout << ", type: " << typeid(var).name();
    cout << "\n";
}

int main(){

    float frac_1 {0.2345678987654321f};
    double frac_2 {0.2345678987654321};
    long double frac_3 {0.2345678987654321L};

    cout << setprecision(20);
    get_info(frac_1);
    get_info(frac_2);
    get_info(frac_3);

    return 0;
}