// array.h -- A generic array class template
//
//              Implements several features from copy constructor,
//              to copy-and-swap idiom, move constructor,
//              printing via overloaded operator<<, etc.
//
// by Akorra

#ifndef ARRAY_HPP_INCLUDED
#define ARRAY_HPP_INCLUDED

class IndexOutOfBoundsException {};

//-----------------------------------------------------------------------------
// A generic array of T
//-----------------------------------------------------------------------------
template <typename T>
class Array {
  //
  // Implementation Details
  //
private:
  T*  m_ptr{nullptr};
  int m_size{0};

  bool IsValidIndex(int index) const
  {
    return (index >= 0) && (index < m_size);
  }

  //
  // Public Interface
  //
public:
  Array() = default;

  explicit Array(int size)
  {
    assert(size >= 0);

    if(size != 0)
    {
        m_ptr = new T[size]{};
        m_size = size;
    }
  }

  //copy construct
  Array(const Array& src)
  {
    if(! src.isEmpty())
      m_size = src.m_size;

    m_ptr = new T[m_size]{};

    for (int i=0; i<m_size; i++)
      m_ptr[i] = source.m_ptr[i];
  }

  //move constructor - steal data from source
  Array(Array&& src) : m_ptr{ src.m_ptr}, m_size{src.m_size}
  {
    // Reset source in a safe state
    src.m_ptr = nullptr;
    src.m_size = 0;
  }

  ~Array()
  {
    delete [] m_ptr; // can be called on nullptr
  }

  int size() const
  {
      return m_size;
  }

  bool isEmpty() const
  {
    return (m_size == 0);
  }

  T& operator[](int index)
  {
    if(! isValidIndex(index))
      throw IndexOutOfBoundsException{};
    return m_ptr[index];
  }

  //read-only
  T operator[](int index) const 
  {
    if(! isValidIndex(index))
      throw IndexOutOfBoundsException{};
    return m_ptr[index];
  }

  template<typename T>
  inline std::ostream& operator<<(ostream& os, const Array<T>& a)
  {
    os << "[ ";
    for (int i=0; i<a.size(); i++)
      os << a[i] << ' ';
    os << "]";

    return os;
  }

  //copy operator
  Array& operator=(const Array& src)
  {
    swap(*this, src);

    return *this;
  }

  friend void swap(Array& a, Array& b) noexcept
  {
    using std::swap;
    //Memberwise swap
    swap(a.m_ptr, b.m_ptr);
    swap(a.m_size, b.m_size);
  }
}

#endif
