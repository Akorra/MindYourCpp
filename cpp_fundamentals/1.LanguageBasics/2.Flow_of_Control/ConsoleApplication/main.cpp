#include <iostream>
using namespace std;

int main(){
  int x;
  cout << "[+] Enter a number, 0 or negative to quit : ";
  cin >> x;
  string sign = x>0? "Positive" : "0 or Negative";
  cout << "[+] Your number is " << sign << endl;

  while(x>0){
    switch (x) {
      case 1:
        cout << "\t[+] You entered 1" << endl;
        break;
      case 2:
      case 3:
        cout << "\t[+] You entered 2 or 3" << endl;
        break;
      case 4:
        cout << "\t[+] You entered 4" << endl;
        break;
      case 5:
        cout << "\t[+] You entered 5" << endl;
        break;
      default:
        cout << "\t[+] You entered something other than 1-5" << endl;
    }
    cout << "[+] Enter a number, 0 or negative to quit : ";
    cin >> x;
    sign = x>0? "Positive" : "0 or Negative";
    cout << "[+] Your number is " << sign << endl;
  }
  bool prime = true;
  int i=2;
  for(int i=2; i <= x/i; i++){
    int factor = x/i;
    if(factor*i == x){
      cout << "[+] factor found: " << i << "*" << factor << endl;
      break;
    }
    i++;
  }
  cout << x << " is ";
  if(prime)
    cout << "prime" << endl;
  else
    cout << "not prime" << endl;
}
