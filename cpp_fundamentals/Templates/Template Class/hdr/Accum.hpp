#ifndef _ACCUM_HPP_
#define _ACCUM_HPP_

template <class T>
class Accum
{
private:
  T total;
public:
  Accum(T start): total(start){};
  Accum<T> operator+=(T const& t){ return total = total + t;};
  T GetTotal() const {return total;}
};

#endif
