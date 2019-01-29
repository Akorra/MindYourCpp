#include "../hdr/Person.h"
Person::Person(std::string first, std::string last, int arbitrarynumber) : firstname(first), lastname(last), arbitrarynumber(arbitrarynumber) {}
std::string Person::GetName() const {
  return (firstname + " " + lastname);
}
