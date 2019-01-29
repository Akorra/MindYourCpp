#include "Resource.h"
#include <iostream>
#include <string>

class Person
{
private:
  std::string firstname;
  std::string lastname;
  int arbitrarynumber;
  Resource* pResource;
public:
  Person(std::string first, std::string last, int arbitrarynumber);
  ~Person();
  //if we have delete in a destructor we also need these:
  Person(Person const& p); //copy constructor
  Person& operator=(const Person& p); //copy assignement operator
  std::string GetName() const;
  int GetNumber() const { return arbitrarynumber; }
  void SetNumber(int number) {arbitrarynumber = number;}
  void SetFirstName(std::string first) { firstname = first; }
  void AddResource();
};
