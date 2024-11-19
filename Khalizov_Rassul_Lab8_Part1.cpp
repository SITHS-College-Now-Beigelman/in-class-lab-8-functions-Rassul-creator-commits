#include <iostream>   // enables inputs and outputs operations
#include <cmath>      // enables sqt, power, and fllor

using namespace std; 

int main() {
    double num;
    
    // asks the user to input a float point number
    cout << "Enter a floating point number: ";
    cin >> num;
    
    // calculates what the square root, fourt power, and floor of the number is and outputs it
    cout << "Square root: " << sqrt(num) << endl;
    cout << "Fourth power: " << pow(num, 4) << endl;
    cout << "Floor: " << floor(num) << endl;
    
    return 0;
    /*
    Enter a floating point number: 1.1111
    Square root: 1.05409
    Fourth power: 1.5241
    Floor: 1
    */
}
