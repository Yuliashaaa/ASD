#include <iostream>
using namespace std;

int GCD(int m, int n);

int main(){
  int x, y;
  cout << "\n Enter first number: ";
  cin >> x;
  cout << "\n Enter second number: ";
  cin >> y;
  cout << "\n The greatest common divisor of " << x << " and " << y << " is " << GCD(x, y);
  return 0;
}

int GCD(int m, int n){
  if (n == 0)
    return m;
  return GCD(n, m % n);
}
