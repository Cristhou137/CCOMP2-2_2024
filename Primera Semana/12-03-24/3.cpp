#include <iostream>

using namespace std;

void circum (int a) {
  int circum{0};

  circum = 3.14159 * 2 * a;
  cout << "The circumference is " << circum << endl;
}

void diam (int a) {
  int diam{0};

  diam = 2 * a;
  cout << "The diameter is " << diam << endl;
}

void area (int a) {
  int area{0};

  area = 3.14159 * (a * a);
  cout << "The area is " << area << endl;
}

int main() {
  int number1{0};

  cout << "Enter the radius" << endl;
  cin >> number1;

  circum(number1);
  diam(number1);
  area(number1);

  return 0;
}