#include <string>
class Person
{
private:
  std::string firstname;
  std::string lastname;
  int arbitrarynumber;
  //friend declaration allow acces from friend function to privates
  friend bool operator<(int i, Person const& p);
public:
  Person(std::string first, std::string last, int arbitrarynumber);
  ~Person();
  std::string GetName() const;
  int GetNumber() const { return arbitrarynumber; }
  void SetNumber(int number) {arbitrarynumber = number;}
  bool operator<(Person const& p) const;
  bool operator<(int i) const;
};
bool operator<(int i, Person const& p);
