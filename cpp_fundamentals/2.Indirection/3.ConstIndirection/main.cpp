#include "hdr/Person.h"

//passing const reference instead of reference allows to pass in literals like 10
int DoubleIt(int const& x){
  return x*2;
}

int main() {
  int *pI = &i;

  int const* pcI = pI; //pointer to const
  pcI = &j;
  j = *pcI;

  int* const cpI = pI; //const pointer
  *cpI = 4;

  int const * const crazy = pI; // const pointer to a const
  j = *crazy;

  return 0
}
