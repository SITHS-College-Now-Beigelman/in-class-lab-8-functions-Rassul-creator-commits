#include <iostream>   // enables inputs and outputs operations
#include <cmath>      // enables sqt, power, and fllor

int main() {
    double num;
    
    // asks the user to input a float point number
    std::cout << "Enter a floating point number: ";
    std::cin >> num;
    
    // calculates what the square root, fourt power, and floor of the number is and outputs it
    std::cout << "Square root: " << sqrt(num) << std::endl;
    std::cout << "Fourth power: " << pow(num, 4) << std::endl;
    std::cout << "Floor: " << floor(num) << std::endl;
    
    return 0;
    /*
    Enter a floating point number: 1.1111
    Square root: 1.05409
    Fourth power: 1.5241
    Floor: 1
    */
}
