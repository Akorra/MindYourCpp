#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<class T>
T max2(T const& t1, T const& t2){
  return t1<t2? t2: t1;
}

int main(){
  cout << "[+] Max of 33 and 44 is " << max2(33,44) << endl;
  string s1 = "hello";
  string s2 = "world";
  cout << "[+] Max of " << s1 << " and " << s2 << " is " << max2(s1,s2) << endl;
}
