#include "../hdr/Person.h"
//using namespace std;
using std::cout;
using std::endl;
using std::string;

Person::Person() : arbitrarynumber(0) {
  cout << "[+] Constructing " << getName() << endl;
}

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary) {
  cout << "[+] Constructing " << getName() << endl;
}

Person::~Person(){
  cout << "[-] Destructing " << getName() << endl;
}

string Person::getName() const {
  return firstname + " " + lastname;
}
