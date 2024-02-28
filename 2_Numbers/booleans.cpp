#include<iostream>
#include<typeinfo>

using namespace std;

int main(){

    bool red_light = true;
    bool green_light = false;


    cout << "bool: " << sizeof(bool) << " bytes, " << typeid(bool).name() << "\n";
    cout << red_light << " " << green_light << endl;
    cout << boolalpha;
    cout << red_light << " " << green_light << endl;

    return 0;
}