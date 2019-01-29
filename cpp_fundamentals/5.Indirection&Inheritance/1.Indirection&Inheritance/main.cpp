#include "hdr/Twitter.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
  Person Kate("Kate", "Gregory", 456);
  Person & rKate = Kate;
  Person* pKate = &Kate;

  Twitter KateGregCons ("Kate", "Gregory", 567, "@gregcons");
  Person* pKateGregCons = &KateGregCons;
  Person& rpKateGregCons = KateGregCons;
  Twitter& rtKateGregCons = KateGregCons;

  cout << rKate.GetName() << endl;
  cout << pKate->GetName() << endl;
  cout << KateGregCons.GetName() << endl;
  cout << rpKateGregCons.GetName() << endl;
  cout << rtKateGregCons.GetName() << endl;
  cout << pKateGregCons->GetName() << endl;

  Person* Someone = new Twitter("Someone", "Else", 567, "@Someone");
  cout << Someone->GetName() << endl;
  delete Someone;
}
