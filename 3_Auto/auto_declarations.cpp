#include<iostream>
#include<typeinfo>

using namespace std;

template <typename T>
void get_info(T& var){
    cout << "value: " << var << ", ";
    cout << "size: " << sizeof(var) << ", ";
    cout << "type: " << typeid(var).name() << endl;
}

int main(){

    auto var1 {12}; // int
    auto var2 {12u}; // unsigned int
    auto var3 {12l}; // long
    auto var4 {12ul}; // unsigned long
    auto var5 {12ll}; // long long
    auto var6 {12ull}; // unsigned long long
    auto var7 {12.0f}; // float
    auto var8 {12.0}; // double
    auto var9 {12.0L}; // long double
    auto var10 {'m'}; // character
    auto var11 {true}; // bool
    auto var12 {"hello"}; // string

    get_info(var1);
    get_info(var2);
    get_info(var3);
    get_info(var4);
    get_info(var5);
    get_info(var6);
    get_info(var7);
    get_info(var8);
    get_info(var9);
    get_info(var10);
    get_info(var11);
    get_info(var12);

    return 0;
}