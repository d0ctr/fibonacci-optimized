#ifndef HANDLER_HPP
#define  HANDLER_HPP

#include <list>
#include <sstream>
#include "fibonaccirow.hpp"
namespace HUI
{
  long long find(const int &index, FibonacciRow &collection);
  void getRow(const int &start, const int &finish, FibonacciRow &collection);
  void getFullRow(const bool clear, FibonacciRow &collection);
  long long getMax(FibonacciRow &collection);
  long long getMin(FibonacciRow &collection);
  void clear(FibonacciRow &collection);
  int readNum(std::istream &input);
  void checkIndex(const int &index);
}
#endif
