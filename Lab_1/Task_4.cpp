#include <iostream>
using namespace std;

void ToH(int disks, char from, char to, char temp){
  if(disks != 0){
    ToH(disks - 1, from, temp, to);
    cout << from << " -> " << to << endl;
    ToH(disks - 1, temp, to, from);
  }
}

int main(){
  int disks;
  cout << "How many disks? ";
  cin >> disks;
  ToH(disks, 'A', 'C', 'B');
  return 0;
}
