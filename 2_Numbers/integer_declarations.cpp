#include<iostream>

using namespace std;

int main(){

    // Variable takes a random garbage value
    int integer_1;

    // Variable is initialized with zero
    int integer_2 {};

    // Variable is initialized with specific value
    int integer_3 {10};

    // Variable is initialized with result of an operation
    int integer_4 {7 + 9};

    // Variable is force initialized with a value of higher type
    int integer_5 {(int)2.9999};

    cout << "integer_1: " << integer_1 << endl;
    cout << "integer_2: " << integer_2 << endl;
    cout << "integer_3: " << integer_3 << endl;
    cout << "integer_4: " << integer_4 << endl;
    cout << "integer_5: " << integer_5 << endl;

    return 0;
}