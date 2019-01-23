#include "../hdr/Person.h"
//using namespace std;
using std::cout;
using std::endl;
using std::string;

Person::Person() : arbitrarynumber(0) {
  cout << "[+] Constructing " << firstname << " " << lastname << endl;
}

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary) {
  cout << "[+] Constructing " << firstname << " " << lastname << endl;
}

Person::~Person(){
  cout << "[-] Destructing " << firstname << " " << lastname << endl;
}

string Person::getName(){
  return firstname + " " + lastname;
}
