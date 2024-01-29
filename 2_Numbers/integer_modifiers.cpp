#include<iostream>
#include<typeinfo>

// Macro to read a variable name
// #define GET_NAME(Variable) (#Variable)

using namespace std;

template <typename T>
void get_info(T& var){
    cout << "data: " << var;
    cout << ", size: " << sizeof(var);
    cout << ", type: " << typeid(var).name();
    cout << "\n";
}

int main(){

    int value_1 {10};
    unsigned value_2 {10};

    short value_3 {10};
    unsigned short value_4 {10};

    long value_5 {10};
    unsigned long value_6 {10};

    long long value_7 {10};
    unsigned long long value_8 {10};

    get_info(value_1);
    get_info(value_2);
    get_info(value_3);
    get_info(value_4);
    get_info(value_5);
    get_info(value_6);
    get_info(value_7);
    get_info(value_8);

    return 0;
}