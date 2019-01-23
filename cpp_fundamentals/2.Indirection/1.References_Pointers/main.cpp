#include "hdr/Person.h"

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

  Person Kate("Kate", "Gregory", 234);
  Person& rKate = Kate;
  rKate.SetNumber(345);
  cout << "[+] rKate: " << rKate.GetName() << " " << rKate.GetNumber() << endl;
  cout << "[+] Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;

  Person* pKate = &Kate;
  (*pKate).SetNumber(235);
  pKate->SetNumber(236);
  cout << "[+] pKate: " << pKate->GetName() << " " << pKate->GetNumber() << endl;
  cout << "[+] Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;

  int* badPointer=nullptr;
  if(badPointer){
    *badPointer=3;
    cout <<  "[+] badpointer: " << *badPointer << endl;
  }

  return 0;
}
