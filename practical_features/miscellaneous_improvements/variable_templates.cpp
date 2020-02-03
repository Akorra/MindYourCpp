#include <iostream>
using namespace std;

template <typename T>
constexpr T maxValue = T(1000);

template <>
constexpr double maxValue<double> = 2000;

template <>
constexpr double maxValue<char> = 'Z';

int main()
{
  cout << " maxValue<int> : "     << maxValue<int>      << '\n';
  cout << " maxValue<double> : "  << maxValue<double>   << '\n';
  cout << " maxValue<char> : "    << maxValue<char>     << '\n';
}
