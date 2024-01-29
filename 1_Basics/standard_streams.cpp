#include<iostream>

using namespace std;

double div_values(double x, double y){
    return x / y;
}

/**
 * STANDARD STREAMS
 * cout ---> Standard output stream object
 * cin  ---> Standard input stream object
 * cerr ---> Standard error stream object
 * clog ---> Standard log stream object 
*/

int main(){

    double x, y;

    cout << "Enter two numbers for division: ";
    cin >> x >> y;

    if(y != 0){
        cout << "Quotient: " << div_values(x, y) << endl;
        clog << "Division successfully evaluated.\n";
    }
    else{
        cerr << "Division by zero is not defined.\n";
    }

    return 0;
}