#include <iostream>

using namespace std;

int main() {
    double num1, num2;

   
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl; 
    cout << "Remainder: " << (static_cast<int>(num2) != 0 ? static_cast<int>(num1) % static_cast<int>(num2) : 0) << endl;

    return 0;
}
