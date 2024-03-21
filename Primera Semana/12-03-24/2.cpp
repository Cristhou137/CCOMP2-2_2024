#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};

    cout << "Enter the radius" << endl;
    cin >> number1;

    if (number1 > number2) {
    cout << number1 << " is larger" << endl;
    } else if (number1 < number2) {
    cout << number2 << " is larger" << endl;
    } else if (number1 == number2) {
    cout << "the numbers are equal " << number1 << endl;}

    return 0;
}