#include <iostream>

using namespace std;

void sum (int a, int b) 
  {
    cout << "The sum is " << a + b << endl;
  }

void res (int a, int b)
  {
    cout << "The rest is " << a - b << endl;
  }

void prod (int a, int b) 
  {
    cout << "The product is " << a * b << endl;
  }

void divi (int a, int b) 
  {
    cout << "The division is " << a / b << endl;
  }

int main() {
  int number1{0};
  int number2{0};

  cout << "Enter the radius" << endl;
  cin >> number1;

  sum(number1, number2);
  res(number1, number2);
  prod(number1, number2);
  divi(number1, number2);
}