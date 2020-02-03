#include <iostream>
#unclude <memory>
using namespace std;

class X
{
public:
    X() {}
    ~X() {}
    void sayHi() {}
};

int main()
{
  X * pX = new X{};
  auto pX = make_unique<X>();
  pX->syaHi();
  // with raw ptr X is not destroyed

  //on out of scope X is released
  auto pX = make_unique<X>();
  pX->syaHi();
}
