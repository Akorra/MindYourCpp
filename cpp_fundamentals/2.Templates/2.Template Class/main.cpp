#include <iostream>
#include <string>
#include "hdr/Accum.hpp"

using std::cout;
using std::endl;
using std::string;

int main(){
  Accum<int> integers(0);
  integers += 3;
  integers += 7;
  cout << integers.GetTotal() << endl;

  Accum<string> strings("");
  strings += "hello";
  strings += " world";
  cout << strings.GetTotal() << endl;

  return 0;
}
