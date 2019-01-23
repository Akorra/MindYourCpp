#include "hdr/Tweeter.h"
#include "hdr/status.h"

using namespace std;

int main(){
  Person p1("Phil", "Marquez", 123);

  {
    //start scope
    Tweeter t1("Someone", "Else", 456, "@whoever");
    //scope
  }

  cout << "[+] After Innermost block" << endl;
  cout << "[+] p1: " << p1.getName() << " " << p1.GetNumber() << endl;
  p1.SetNumber(124);
  cout << "[+] p1: " << p1.getName() << " " << p1.GetNumber() << endl;

  return 0;
}
