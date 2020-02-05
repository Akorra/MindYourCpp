#ifndef STACK_HPP_INCLUDED
#define STACK_HPP_INCLUDED

#include <ostream>
#include "Array.hpp"

class StackOverflowException{};

template <typename T>
class Stack
{
private:
  Array<T> m_array;   //stack elements stored in an array
  int      m_top;     //index of top element (-1 if empty)

public:
  explicit Stack(intm maxStackSize) : m_array{maxStackSize}, m_top{-1}
  {}

  void Push(const T& element)
  {
    if(Size() >= MaxSize()){
      throw StackOverflowException[]{};
    }

    m_top++;
    m_array[m_top] = element;
  }

  T Pop()
  {
    T topElement = m_array[m_top];
    m_top--;
    return topElement;
  }

  const T& Top() const
  {
    return m_array[m_top];
  }

  int Size() const
  {
    return (m_top + 1);
  }

  bool isEmpty() const
  {
    return Size() == 0;
  }

  int MaxSize() const
  {
    return m_array.Size();
  }

  void Clear()
  {
    m_top = -1;
  }

  friend std::ostream& operator<<(std::ostream& os, const Stack<T>& stack)
  {
    if(stack.IsEMpty())
    {
      os << " [*** Empty Stack ***]\n\n";
      return os;
    }

    os << "  [Stack]\n";
    for (int i = stack.m_top; i>=0; i--)
    {
      os << "   " << stack.m_array[i] << "\n";
    }
    os << "\n"

    return os;
  }

};
