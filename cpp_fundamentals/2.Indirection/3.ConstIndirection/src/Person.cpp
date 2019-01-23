#include "../hdr/Person.h"
Person::Person(std::string first, std::string last, int arbitrarynumber) : firstname(first), lastname(last), arbitrarynumber(arbitrarynumber) {}

Person::~Person(){}

std::string Person::GetName() const {
  return (firstname + " " + lastname);
}

bool Person::operator<(Person const& p) const {
  return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const {
  return arbitrarynumber < i;
}

bool operator<(int i, Person const& p){
  //return i < p.GetNumber();
  //Since this is now a friend Function to p we can access p's private fields
  return i < p.arbitrarynumber;
}
