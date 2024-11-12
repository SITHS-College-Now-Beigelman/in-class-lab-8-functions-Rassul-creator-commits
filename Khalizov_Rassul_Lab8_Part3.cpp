// Khalizov Rassul
// Lab 8
// November 12, 2024

#include <iostream>

double getSum(double num1, double num2, double num3) {
    return num1 + num2 + num3;
}

int main() {
    double a, b, c;
    
    // asks for the user input of three floating point numbers 
    std::cout << "Enter three floating-point numbers: ";
    std::cin >> a >> b >> c;

    // gets a variable named getSum
    double result = getSum(a, b, c);
    
    // Outputs the result
    std::cout << "The sum of the three numbers is: " << result << std::endl;

    return 0;
    /*
    Enter three floating-point numbers: 1.1 2.2 3.3
    The sum of the three numbers is: 6.6
    */
}
