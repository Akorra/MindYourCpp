#include "hdr/Utility.h"

using std::cout;
using std::endl;

int main(){
  int i=0, j=0;
  i += 2;
  if(i==3)
    cout << "[+] i=3" << endl;
  cout << "[+] i=" << i << endl;
  i *= 3;
  cout << "[+] i=" << i << endl;
  i -= 2;
  cout << "[+] i=" << i << endl;
  i = 4;
  cout << "[+] i=" << i << endl;

  j = i++;
  cout << "[+] j=" << j << endl;
  cout << "[+] i=" << i << endl;
  j = ++i;
  cout << "[+] j=" << j << endl;
  cout << "[+] i=" << i << endl;
  j = i--;
  cout << "[+] j=" << j << endl;
  cout << "[+] i=" << i << endl;
  j = --i;
  cout << "[+] j=" << j << endl;
  cout << "[+] i=" << i << endl;

  i = 2;
  j=0;
  while(i<101)
    j += IsPrime(i++)?1:0;
  cout << "[+] Found " << j << " primes up to 100" << endl;
  return 0;
}
