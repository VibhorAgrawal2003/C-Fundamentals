#include<iostream>
#include<vector>
#include<any>

using namespace std;
using list = vector<any>;

int main(){

    list li = {1, 'A', 2, 'B', 3, 'C'};

    for (auto x : li) {
        try {
            if (auto y = any_cast<int>(x)) {
                cout << y << endl;
            }
        }
        catch (const bad_any_cast&) {}
        
        try{
            if (auto y = any_cast<char>(x)) {
                cout << y << endl;
            }
        }
        catch (const bad_any_cast&) {}
    }
    return 0;
}