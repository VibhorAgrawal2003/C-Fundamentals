#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
    cout << "char: " << sizeof(char) << " bytes, " << typeid(char).name() << endl;

    char char_1 = 'A';
    char char_2 = 'B';
    char char_3 = 'C';

    cout << char_1 << " " << char_2 << " " << char_3 << endl;

    int num_1 = static_cast<int>(char_1);
    int num_2 = static_cast<int>(char_2);
    int num_3 = static_cast<int>(char_3);

    cout << num_1 << " " << num_2 << " " << num_3 << endl;

    return 0;
}