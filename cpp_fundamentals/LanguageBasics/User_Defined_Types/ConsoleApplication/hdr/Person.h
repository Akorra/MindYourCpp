#include <string>
#include <iostream>


class Person{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

  public:
    Person(); //default constructor
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
    std::string getName();
};
