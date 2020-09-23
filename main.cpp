#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a;
  double b;
  double c;
  double p;
  float aria;

  cout << "Valoarea laturii 1: ";
  cin >> a;
  cout << "Valoarea laturii 2: ";
  cin >> b;
  cout << "Valoarea laturii 3: ";
  cin >> c;

  p = (a + b + c)/2;
  aria = sqrt (p*(p-a)*(p-b)*(p-c));

  cout << "Aria triunghiului dupa formula lui Heron: " << aria << endl;
  

} 
//Write a program in C++ to find the area of any triangle using Heron's Formula.