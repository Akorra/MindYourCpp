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
  x = x+2;
  return IsPrime(x);
}

int& badFunction(){
    //returns a dangling reference
    // very bad
    //int a is in scope, but as soon as the function terminates,
    //a gets out of scope and its data is cleaned up and reused
    //very very bad

    int a = 3;
    return a;
}
