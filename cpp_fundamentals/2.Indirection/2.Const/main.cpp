#include "hdr/Person.h"

//passing const reference instead of reference allows to pass in literals like 10
int DoubleIt(int const& x){
  return x*2;
}

int main() {
  int i = 3;
  int const ci = 3; //cant change ci value
  i = 4;

  int& ri = i;
  ri = 5;

  int const & cri = i; //cant change cri reference

  int j = 10;
  int DoubleJ = DoubleIt(j);
  int DoubleTen = DoubleIt(10;

  Person Kate("Kate", "Gregory", 234);
  Kate.SetNumber(235);
  Person const cKate = Kate;
  int KateNumber = cKate.GetNumber();
}
