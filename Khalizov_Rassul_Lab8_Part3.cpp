#include <iostream>   // for input-output operations
#include <cmath>      // for math functions like sqrt, pow, and floor

int main() {
    double num;
    
    // Prompt user for a floating point number
    std::cout << "Enter a floating point number: ";
    std::cin >> num;
    
    // Calculate and display the results
    std::cout << "Square root: " << sqrt(num) << std::endl;
    std::cout << "Fourth power: " << pow(num, 4) << std::endl;
    std::cout << "Floor: " << floor(num) << std::endl;
    
    return 0;
}
