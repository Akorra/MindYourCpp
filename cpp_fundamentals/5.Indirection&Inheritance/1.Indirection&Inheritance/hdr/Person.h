#include <iostream>
#include <string>

class Person
{
private:
  std::string firstname;
  std::string lastname;
  int arbitrarynumber;
public:
  Person(std::string first, std::string last, int arbitrarynumber);
  //if we have delete in a destructor we also need these:
  Person(Person const& p); //copy constructor
  virtual ~Person(){};
  Person& operator=(const Person& p); //copy assignement operator
  int GetNumber() const { return arbitrarynumber; }
  void SetNumber(int number) {arbitrarynumber = number;}
  void SetFirstName(std::string first) { firstname = first; }
  virtual std::string GetName() const;
};
