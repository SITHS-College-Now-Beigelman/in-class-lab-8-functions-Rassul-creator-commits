#include <iostream> 
using namespace std;
int doubleMultiply(int a, int b)
{
    int product;
    product = a * b * 2;
    return product;
}
int main()
{
    // labels the variables num1 and num2 as integers
    int num1, num2; 
    // asks the user to input the two integers
    cout << "Enter two integers:  ";
    cin >> num1 >> num2; 
    // calculates and prints out what the product is of the two numbers being multiplied
    cout << "Twice the product of the numbers is: "
         << doubleMultiply(num1, num2) << endl; 
    
    system("PAUSE"); 
    return 0; 

    /*
    Enter two integers:  1 2
    Twice the product of the numbers is: 4
    */
}
