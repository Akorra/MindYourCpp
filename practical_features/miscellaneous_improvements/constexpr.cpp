//Constexpr for fibonacci numbers
#include <iostream>

using namespace std;

constexpr int Fibonacci(int n)
{
  switch (n)
  {
    case 0 :
      return 0;
    case 1 :
      return 1;
    default:
      return Fibonacci(n-1) + Fibonacci(n-2);
  }
}

int main()
{
  cout << "Index? ";
  int i{};

  cin >> i;

  cout << "F_" << i << " = " << Fibonacci(i) << endl;

  static_assert(Fibonacci(10) == 55, "Unexpected Fibnacci number.");
}
