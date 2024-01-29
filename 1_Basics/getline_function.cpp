#include<iostream>
#include<string>

using namespace std;

/**
 * GETLINE FUNCTION
 * Syntax: getline(stream_object, string_variable)
 * 
 * It is used to store the entire line of input into a string variable.
 * Reads all characters preceeding the newline character.
 * Thus the newline character is not read by getline().
*/

int main(){
    string value;
    cout << "Enter a sentence.\n";
    getline(cin, value);

    cout << value << endl;

    return 0;
}