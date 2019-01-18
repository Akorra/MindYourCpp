#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){
  int a = 3;
  cout << "[+] a is " << a << endl;
  int& rA = a;
  rA = 5;
  cout << "[+] a is " << a << endl;
  int* pA = &a;
  *pA = 6;
  cout << "[+] a is " << a << endl;
  int b = 100;
  pA = &b;
  (*pA)++;
  cout << "[+] a " << a << ", b " << b << ", *pA " << *pA << endl;
  return 0;
}
