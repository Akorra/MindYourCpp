#include "../hdr/Resource.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Resource::Resource(string n):name(n){
  cout << "[+] Constructing " << name << endl;
}

Resource::~Resource(void){
  cout << "[+] Destructing " << name << endl;
}
