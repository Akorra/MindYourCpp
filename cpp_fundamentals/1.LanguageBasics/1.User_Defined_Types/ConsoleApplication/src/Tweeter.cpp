#include "../hdr/Tweeter.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) : Person(first,last,arbitrary), twitterhandle(handle){
  cout << "[+] Constructing Tweeter " << twitterhandle << endl;
}

Tweeter::~Tweeter(){
  cout << "[-] Destructing Tweeter " << twitterhandle << endl;
}
