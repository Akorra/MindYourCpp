#include "../hdr/Person.h"
Person::Person(std::string first, std::string last, int arbitrarynumber) : firstname(first), lastname(last), arbitrarynumber(arbitrarynumber) {}

//no destructor needed

Person::Person(Person const& p){
  pResource = new Resource(p.pResource->GetName());
}

Person::Person& operator=(const Person& p){
  //not checking for self-assignment
  delete pResource;
  pResource = new Resource(p.pResource->GetName());
  return *this;
}

std::string Person::GetName() const {
  return (firstname + " " + lastname);
}

bool Person::void AddResource(){
  pResource.reset();
  pResource = std::make_shared<Resource>("Resource for " + GetName());
}
