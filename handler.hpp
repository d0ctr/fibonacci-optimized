#ifndef HANDLER_HPP
#define  HANDLER_HPP

#include <list>
#include <sstream>
#include "fibanacirow.hpp"
namespace HUI
{
  long long find(const int &index, FibanaciRow &collection);
  void getRow(const int &start, const int &finish, FibanaciRow &collection);
  void getFullRow(const bool clear, FibanaciRow &collection);
  long long getMax(FibanaciRow &collection);
  long long getMin(FibanaciRow &collection);
  void clear(FibanaciRow &collection);
  int readNum(std::istream &input);
  void checkIndex(const int &index);
}
#endif
