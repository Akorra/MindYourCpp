#include "../hdr/Utility.h"

using std::cout;
using std::endl;

bool IsPrime(int x){
  int factor;
  for(int i=2; i<=x/i; i++){
    factor = x/i;
    if(factor*i == x){
      cout << "[+] factor found " << factor << endl;
      return false;
    }
  }
  return true;
}

bool Is2MorePrime(int const& x){
  //x = x+2;
  return IsPrime(x+2);
}
