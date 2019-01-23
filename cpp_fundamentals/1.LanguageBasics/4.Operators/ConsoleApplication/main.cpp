#include "hdr/Utility.h"
#include "hdr/Person.h"
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

  cout << "[+] Now on to overloading..." << endl;

  Person p1("Akorra", "Pendragon", 123);
  Person p2("Phil", "Marques", 456);

  cout << "\t[+] p1 is ";
  if(!(p1<p2)) cout << "not ";
  cout << "less than p2" << endl;

  cout << "\t[+] p1 is ";
  if(!(p1<300)) cout << "not ";
  cout << "less than 300" << endl;

  cout << "\t[+] 300 is ";
  if(!(300 < p1)) cout << "not ";
  cout << "less than p1" << endl;
  return 0;
}
