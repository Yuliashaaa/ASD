#include <iostream>
using namespace std;

double power(double m, int n);

int main(){
  double x;
  int y;
  cout << "\n Enter the number: ";
  cin >> x;
  cout << "\n Enter the power: ";
  cin >> y;
  cout << "\n Result of " << x << " to the power of " << y << " is " << power(x, y);
  return 0;
}

double power(double m, int n){
  double res;
  if (n == 0)
    return 1;
  else if (n == 1)
    return m;
  res = m * power(m, n - 1);
  return res;
}
